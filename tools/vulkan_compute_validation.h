#pragma once
// Shared offscreen correctness harness. No game execution or performance trace.
#include "validation_common.h"
#include "../src/graphics/shader_contract.h"
#include <vulkan/vulkan.h>
#include <algorithm>
#include <array>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>

namespace fh1::validation {
template<class T> T vk_info(VkStructureType type) {
  T result{}; result.sType = type; return result;
}

void check(VkResult result, const char* operation) {
  if (result != VK_SUCCESS)
    throw std::runtime_error(std::string(operation) + " failed: " + std::to_string(result));
}

struct Buffer {
  VkDevice device{};
  VkBuffer buffer{};
  VkDeviceMemory memory{};
  void* mapped{};
  VkDeviceAddress address{};
  Buffer(VkDevice d, VkPhysicalDevice physical, size_t bytes) : device(d) {
    auto info = vk_info<VkBufferCreateInfo>(VK_STRUCTURE_TYPE_BUFFER_CREATE_INFO);
    info.size = bytes;
    info.usage = VK_BUFFER_USAGE_STORAGE_BUFFER_BIT | VK_BUFFER_USAGE_SHADER_DEVICE_ADDRESS_BIT;
    info.sharingMode = VK_SHARING_MODE_EXCLUSIVE;
    check(vkCreateBuffer(device, &info, nullptr, &buffer), "Create validation buffer");
    VkMemoryRequirements requirements{};
    vkGetBufferMemoryRequirements(device, buffer, &requirements);
    VkPhysicalDeviceMemoryProperties properties{};
    vkGetPhysicalDeviceMemoryProperties(physical, &properties);
    uint32_t type = UINT32_MAX;
    for (uint32_t i = 0; i < properties.memoryTypeCount; ++i)
      if ((requirements.memoryTypeBits & (1u << i)) &&
          (properties.memoryTypes[i].propertyFlags & (VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)) ==
          (VK_MEMORY_PROPERTY_HOST_VISIBLE_BIT | VK_MEMORY_PROPERTY_HOST_COHERENT_BIT)) { type = i; break; }
    fh1::validation::require(type != UINT32_MAX, "No coherent host-visible memory for validation");
    auto flags = vk_info<VkMemoryAllocateFlagsInfo>(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_FLAGS_INFO);
    flags.flags = VK_MEMORY_ALLOCATE_DEVICE_ADDRESS_BIT;
    auto allocation = vk_info<VkMemoryAllocateInfo>(VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO);
    allocation.pNext = &flags; allocation.allocationSize = requirements.size; allocation.memoryTypeIndex = type;
    check(vkAllocateMemory(device, &allocation, nullptr, &memory), "Allocate validation memory");
    check(vkBindBufferMemory(device, buffer, memory, 0), "Bind validation buffer");
    check(vkMapMemory(device, memory, 0, VK_WHOLE_SIZE, 0, &mapped), "Map validation memory");
    auto address_info = vk_info<VkBufferDeviceAddressInfo>(VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO);
    address_info.buffer = buffer; address = vkGetBufferDeviceAddress(device, &address_info);
    fh1::validation::require(address && !(address & 15), "Validation buffer address lacks 16-byte alignment");
  }
  Buffer(const Buffer&) = delete;
  ~Buffer() {
    if (mapped) vkUnmapMemory(device, memory);
    if (buffer) vkDestroyBuffer(device, buffer, nullptr);
    if (memory) vkFreeMemory(device, memory, nullptr);
  }
};

struct Context {
  VkInstance instance{};
  VkDevice device{};
  VkDescriptorSetLayout set_layout{};
  VkDescriptorPool descriptor_pool{};
  VkPipelineLayout pipeline_layout{};
  VkShaderModule shader{};
  VkPipeline pipeline{};
  VkCommandPool command_pool{};
  VkFence fence{};
  ~Context() {
    if (device) {
      // Ensure the validation device has finished before destroying its objects.
      vkDeviceWaitIdle(device);
      if (fence) vkDestroyFence(device, fence, nullptr);
      if (command_pool) vkDestroyCommandPool(device, command_pool, nullptr);
      if (pipeline) vkDestroyPipeline(device, pipeline, nullptr);
      if (shader) vkDestroyShaderModule(device, shader, nullptr);
      if (pipeline_layout) vkDestroyPipelineLayout(device, pipeline_layout, nullptr);
      if (descriptor_pool) vkDestroyDescriptorPool(device, descriptor_pool, nullptr);
      if (set_layout) vkDestroyDescriptorSetLayout(device, set_layout, nullptr);
      vkDestroyDevice(device, nullptr);
    }
    if (instance) vkDestroyInstance(instance, nullptr);
  }
};

template<class Suite, class Oracle>
void validate_compute(const char* path, const Suite& suite, Oracle reference,
                      const std::vector<Float4>& vertex_constants = {},
                      const std::vector<Float4>& pixel_constants = {},
                      const std::vector<std::pair<uint32_t, uint64_t>>& fetch_offsets = {}) {
  Context context;
  auto application = vk_info<VkApplicationInfo>(VK_STRUCTURE_TYPE_APPLICATION_INFO);
  application.pApplicationName = "FH1 synthetic shader validation";
  application.apiVersion = VK_API_VERSION_1_2;
  uint32_t count = 0;
  check(vkEnumerateInstanceExtensionProperties(nullptr, &count, nullptr), "List instance extensions");
  std::vector<VkExtensionProperties> extensions(count);
  check(vkEnumerateInstanceExtensionProperties(nullptr, &count, extensions.data()), "Read instance extensions");
  auto has_extension = [](const auto& list, const char* name) {
    return std::any_of(list.begin(), list.end(), [&](const auto& e) { return std::strcmp(e.extensionName, name) == 0; });
  };
  // Direct MoltenVK linking has no loader portability-enumeration extension;
  // other builds may use the Vulkan loader, where it must be enabled.
  const char* portability = VK_KHR_PORTABILITY_ENUMERATION_EXTENSION_NAME;
  auto instance_info = vk_info<VkInstanceCreateInfo>(VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO);
  instance_info.pApplicationInfo = &application;
  if (has_extension(extensions, portability)) {
    instance_info.flags = VK_INSTANCE_CREATE_ENUMERATE_PORTABILITY_BIT_KHR;
    instance_info.enabledExtensionCount = 1; instance_info.ppEnabledExtensionNames = &portability;
  }
  check(vkCreateInstance(&instance_info, nullptr, &context.instance), "Create Vulkan validation instance");
  check(vkEnumeratePhysicalDevices(context.instance, &count, nullptr), "List GPUs");
  require(count > 0, "No Vulkan/Metal GPU available");
  std::vector<VkPhysicalDevice> physicals(count);
  check(vkEnumeratePhysicalDevices(context.instance, &count, physicals.data()), "Read GPUs");
  VkPhysicalDevice physical = VK_NULL_HANDLE;
  uint32_t family = UINT32_MAX;
  for (auto candidate : physicals) {
    auto f12 = vk_info<VkPhysicalDeviceVulkan12Features>(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES);
    auto features = vk_info<VkPhysicalDeviceFeatures2>(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2);
    features.pNext = &f12; vkGetPhysicalDeviceFeatures2(candidate, &features);
    if (!f12.bufferDeviceAddress || !features.features.shaderInt64) continue;
    vkGetPhysicalDeviceQueueFamilyProperties(candidate, &count, nullptr);
    std::vector<VkQueueFamilyProperties> queues(count);
    vkGetPhysicalDeviceQueueFamilyProperties(candidate, &count, queues.data());
    for (uint32_t i = 0; i < count; ++i) if (queues[i].queueFlags & VK_QUEUE_COMPUTE_BIT) {
      physical = candidate; family = i; break;
    }
    if (physical) break;
  }
  require(physical != VK_NULL_HANDLE, "Prototype requires bufferDeviceAddress, shaderInt64 and a compute queue");
  VkPhysicalDeviceProperties properties{}; vkGetPhysicalDeviceProperties(physical, &properties);
  require(suite.cases.size() <= properties.limits.maxComputeWorkGroupCount[0], "Validation dispatch exceeds device limits");
  printf("GPU: %s (Vulkan %u.%u)\n", properties.deviceName, VK_API_VERSION_MAJOR(properties.apiVersion), VK_API_VERSION_MINOR(properties.apiVersion));
  check(vkEnumerateDeviceExtensionProperties(physical, nullptr, &count, nullptr), "List device extensions");
  extensions.resize(count);
  check(vkEnumerateDeviceExtensionProperties(physical, nullptr, &count, extensions.data()), "Read device extensions");
  const char* subset = "VK_KHR_portability_subset";
  float priority = 1;
  auto queue_info = vk_info<VkDeviceQueueCreateInfo>(VK_STRUCTURE_TYPE_DEVICE_QUEUE_CREATE_INFO);
  queue_info.queueFamilyIndex = family; queue_info.queueCount = 1; queue_info.pQueuePriorities = &priority;
  auto f12 = vk_info<VkPhysicalDeviceVulkan12Features>(VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES); f12.bufferDeviceAddress = VK_TRUE;
  VkPhysicalDeviceFeatures features{}; features.shaderInt64 = VK_TRUE;
  auto device_info = vk_info<VkDeviceCreateInfo>(VK_STRUCTURE_TYPE_DEVICE_CREATE_INFO);
  device_info.pNext = &f12; device_info.pEnabledFeatures = &features;
  device_info.queueCreateInfoCount = 1; device_info.pQueueCreateInfos = &queue_info;
  if (has_extension(extensions, subset)) { device_info.enabledExtensionCount = 1; device_info.ppEnabledExtensionNames = &subset; }
  check(vkCreateDevice(physical, &device_info, nullptr, &context.device), "Create validation device");
  VkQueue queue{}; vkGetDeviceQueue(context.device, family, 0, &queue);

  Buffer vertices(context.device, physical, std::max(size_t(16), vertex_constants.size() * sizeof(Float4)));
  Buffer pixels(context.device, physical, std::max(size_t(16), pixel_constants.size() * sizeof(Float4)));
  std::memset(vertices.mapped, 0, std::max(size_t(16), vertex_constants.size() * sizeof(Float4)));
  std::memset(pixels.mapped, 0, std::max(size_t(16), pixel_constants.size() * sizeof(Float4)));
  if (!vertex_constants.empty()) std::memcpy(vertices.mapped, vertex_constants.data(), vertex_constants.size() * sizeof(Float4));
  if (!pixel_constants.empty()) std::memcpy(pixels.mapped, pixel_constants.data(), pixel_constants.size() * sizeof(Float4));
  Buffer data(context.device, physical, suite.words.size() * 4);
  Buffer shared(context.device, physical, sizeof(suite.shared));
  Buffer cases(context.device, physical, suite.cases.size() * sizeof(typename decltype(suite.cases)::value_type));
  Buffer results(context.device, physical, suite.cases.size() * sizeof(Float4));
  std::memcpy(data.mapped, suite.words.data(), suite.words.size() * 4);
  auto gpu_shared = suite.shared;
  for (auto& binding : gpu_shared.vertex_fetch) {
    if (binding.device_address == 4) binding.device_address = data.address;
    else if (binding.device_address == 5) binding.device_address = data.address + 1;
  }
  std::array<bool, 96> rebound{};
  for (const auto& [slot, offset] : fetch_offsets) {
    require(slot < 96 && !rebound[slot], "Invalid or duplicate captured fetch slot");
    rebound[slot] = true;
    auto& binding = gpu_shared.vertex_fetch[slot];
    const uint64_t bytes = uint64_t(binding.word_count) * 4;
    require(binding.word_count && binding.word_count <= 0xFFFFFF && binding.endian < 4 &&
            !(offset & 3) && offset <= suite.words.size() * 4 &&
            bytes <= suite.words.size() * 4 - offset,
            "Captured fetch exceeds its owned validation buffer");
    binding.device_address = data.address + offset;
  }
  std::memcpy(shared.mapped, &gpu_shared, sizeof(gpu_shared));
  std::memcpy(cases.mapped, suite.cases.data(), suite.cases.size() * sizeof(typename decltype(suite.cases)::value_type));
  std::memset(results.mapped, 0xCD, suite.cases.size() * sizeof(Float4));

  std::array<VkDescriptorSetLayoutBinding, 2> bindings{};
  for (uint32_t i = 0; i < 2; ++i) bindings[i] = {i, VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 1, VK_SHADER_STAGE_COMPUTE_BIT, nullptr};
  auto set_info = vk_info<VkDescriptorSetLayoutCreateInfo>(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO);
  set_info.bindingCount = 2; set_info.pBindings = bindings.data();
  check(vkCreateDescriptorSetLayout(context.device, &set_info, nullptr, &context.set_layout), "Create descriptor layout");
  VkDescriptorPoolSize pool_size{VK_DESCRIPTOR_TYPE_STORAGE_BUFFER, 2};
  auto pool_info = vk_info<VkDescriptorPoolCreateInfo>(VK_STRUCTURE_TYPE_DESCRIPTOR_POOL_CREATE_INFO);
  pool_info.maxSets = 1; pool_info.poolSizeCount = 1; pool_info.pPoolSizes = &pool_size;
  check(vkCreateDescriptorPool(context.device, &pool_info, nullptr, &context.descriptor_pool), "Create descriptor pool");
  auto set_allocation = vk_info<VkDescriptorSetAllocateInfo>(VK_STRUCTURE_TYPE_DESCRIPTOR_SET_ALLOCATE_INFO);
  set_allocation.descriptorPool = context.descriptor_pool; set_allocation.descriptorSetCount = 1; set_allocation.pSetLayouts = &context.set_layout;
  VkDescriptorSet descriptor{};
  check(vkAllocateDescriptorSets(context.device, &set_allocation, &descriptor), "Allocate descriptors");
  std::array<VkDescriptorBufferInfo, 2> buffer_infos{{{cases.buffer, 0, VK_WHOLE_SIZE}, {results.buffer, 0, VK_WHOLE_SIZE}}};
  std::array<VkWriteDescriptorSet, 2> writes{};
  for (uint32_t i = 0; i < 2; ++i) {
    writes[i] = vk_info<VkWriteDescriptorSet>(VK_STRUCTURE_TYPE_WRITE_DESCRIPTOR_SET); writes[i].dstSet = descriptor;
    writes[i].dstBinding = i; writes[i].descriptorCount = 1; writes[i].descriptorType = VK_DESCRIPTOR_TYPE_STORAGE_BUFFER;
    writes[i].pBufferInfo = &buffer_infos[i];
  }
  vkUpdateDescriptorSets(context.device, 2, writes.data(), 0, nullptr);
  VkPushConstantRange range{VK_SHADER_STAGE_COMPUTE_BIT, 0, sizeof(fh1::graphics::PushConstants)};
  auto layout_info = vk_info<VkPipelineLayoutCreateInfo>(VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO);
  layout_info.setLayoutCount = 1; layout_info.pSetLayouts = &context.set_layout;
  layout_info.pushConstantRangeCount = 1; layout_info.pPushConstantRanges = &range;
  check(vkCreatePipelineLayout(context.device, &layout_info, nullptr, &context.pipeline_layout), "Create pipeline layout");
  std::ifstream input(path, std::ios::binary | std::ios::ate);
  require(bool(input), "Missing compute SPIR-V");
  const auto bytes = input.tellg(); require(bytes >= 20 && bytes % 4 == 0, "Malformed compute SPIR-V length");
  std::vector<uint32_t> code(size_t(bytes) / 4); input.seekg(0); input.read(reinterpret_cast<char*>(code.data()), bytes);
  require(bool(input) && code[0] == 0x07230203, "Malformed compute SPIR-V header");
  auto module_info = vk_info<VkShaderModuleCreateInfo>(VK_STRUCTURE_TYPE_SHADER_MODULE_CREATE_INFO);
  module_info.codeSize = size_t(bytes); module_info.pCode = code.data();
  check(vkCreateShaderModule(context.device, &module_info, nullptr, &context.shader), "Create compute shader");
  auto pipeline_info = vk_info<VkComputePipelineCreateInfo>(VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO);
  pipeline_info.stage = vk_info<VkPipelineShaderStageCreateInfo>(VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO);
  pipeline_info.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT; pipeline_info.stage.module = context.shader; pipeline_info.stage.pName = "main";
  pipeline_info.layout = context.pipeline_layout;
  check(vkCreateComputePipelines(context.device, VK_NULL_HANDLE, 1, &pipeline_info, nullptr, &context.pipeline), "Compile compute pipeline");
  auto command_pool_info = vk_info<VkCommandPoolCreateInfo>(VK_STRUCTURE_TYPE_COMMAND_POOL_CREATE_INFO); command_pool_info.queueFamilyIndex = family;
  check(vkCreateCommandPool(context.device, &command_pool_info, nullptr, &context.command_pool), "Create command pool");
  auto command_allocation = vk_info<VkCommandBufferAllocateInfo>(VK_STRUCTURE_TYPE_COMMAND_BUFFER_ALLOCATE_INFO);
  command_allocation.commandPool = context.command_pool; command_allocation.level = VK_COMMAND_BUFFER_LEVEL_PRIMARY; command_allocation.commandBufferCount = 1;
  VkCommandBuffer command{}; check(vkAllocateCommandBuffers(context.device, &command_allocation, &command), "Allocate commands");
  auto begin = vk_info<VkCommandBufferBeginInfo>(VK_STRUCTURE_TYPE_COMMAND_BUFFER_BEGIN_INFO);
  check(vkBeginCommandBuffer(command, &begin), "Begin commands");
  vkCmdBindPipeline(command, VK_PIPELINE_BIND_POINT_COMPUTE, context.pipeline);
  vkCmdBindDescriptorSets(command, VK_PIPELINE_BIND_POINT_COMPUTE, context.pipeline_layout, 0, 1, &descriptor, 0, nullptr);
  const fh1::graphics::PushConstants push{vertices.address, pixels.address, shared.address};
  vkCmdPushConstants(command, context.pipeline_layout, VK_SHADER_STAGE_COMPUTE_BIT, 0, sizeof(push), &push);
  vkCmdDispatch(command, uint32_t(suite.cases.size()), 1, 1);
  auto barrier = vk_info<VkMemoryBarrier>(VK_STRUCTURE_TYPE_MEMORY_BARRIER);
  barrier.srcAccessMask = VK_ACCESS_SHADER_WRITE_BIT; barrier.dstAccessMask = VK_ACCESS_HOST_READ_BIT;
  vkCmdPipelineBarrier(command, VK_PIPELINE_STAGE_COMPUTE_SHADER_BIT, VK_PIPELINE_STAGE_HOST_BIT, 0, 1, &barrier, 0, nullptr, 0, nullptr);
  check(vkEndCommandBuffer(command), "End commands");
  auto fence_info = vk_info<VkFenceCreateInfo>(VK_STRUCTURE_TYPE_FENCE_CREATE_INFO);
  check(vkCreateFence(context.device, &fence_info, nullptr, &context.fence), "Create completion fence");
  auto submit = vk_info<VkSubmitInfo>(VK_STRUCTURE_TYPE_SUBMIT_INFO); submit.commandBufferCount = 1; submit.pCommandBuffers = &command;
  check(vkQueueSubmit(queue, 1, &submit, context.fence), "Submit validation");
  const VkResult completed = vkWaitForFences(context.device, 1, &context.fence, VK_TRUE, 10000000000ull);
  if (completed != VK_SUCCESS) { vkDeviceWaitIdle(context.device); check(completed, "Wait for validation"); }
  const auto* actual = static_cast<const Float4*>(results.mapped);
  size_t errors = 0;
  for (size_t i = 0; i < suite.cases.size(); ++i) {
    const auto expected = reference(suite.cases[i], suite.words, suite.shared);
    for (unsigned lane = 0; lane < 4; ++lane) if (!matches(actual[i][lane], expected[lane])) {
      if (errors++ < 12) fprintf(stderr, "Case %zu lane=%u: GPU=%.9g reference=%.9g\n",
          i, lane, actual[i][lane], expected[lane]);
    }
  }
  require(!errors, "GPU shader values differ from the independent reference");
  printf("GPU shader validation: %zu cases passed\n", suite.cases.size());
}
}  // namespace fh1::validation
