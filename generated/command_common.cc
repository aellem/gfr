/*
 * Copyright (C) 2021 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * THIS FILE IS GENERATED BY VkSpecGen. DO NOT EDIT.
 */

#include "command_common.h"

// Returns the name of given command. This only cares for commands that have one
// parameter of type VkCommandBuffer.
const char *Command::GetCommandName(const Command &cmd) {
  switch (cmd.type) {
    default:
    case Command::Type::kUnknown:
      return "Unknown";

    case Command::Type::kCmdDrawMultiEXT:
      return "vkCmdDrawMultiEXT";
    case Command::Type::kCmdDrawMultiIndexedEXT:
      return "vkCmdDrawMultiIndexedEXT";
    case Command::Type::kCmdDebugMarkerBeginEXT:
      return "vkCmdDebugMarkerBeginEXT";
    case Command::Type::kCmdDebugMarkerEndEXT:
      return "vkCmdDebugMarkerEndEXT";
    case Command::Type::kCmdDebugMarkerInsertEXT:
      return "vkCmdDebugMarkerInsertEXT";
    case Command::Type::kCmdPushDescriptorSetKHR:
      return "vkCmdPushDescriptorSetKHR";
    case Command::Type::kCmdSetDeviceMask:
      return "vkCmdSetDeviceMask";
    case Command::Type::kCmdSetDeviceMaskKHR:
      return "vkCmdSetDeviceMaskKHR";
    case Command::Type::kCmdDispatchBase:
      return "vkCmdDispatchBase";
    case Command::Type::kCmdDispatchBaseKHR:
      return "vkCmdDispatchBaseKHR";
    case Command::Type::kCmdPushDescriptorSetWithTemplateKHR:
      return "vkCmdPushDescriptorSetWithTemplateKHR";
    case Command::Type::kCmdSetSampleLocationsEXT:
      return "vkCmdSetSampleLocationsEXT";
    case Command::Type::kCmdBeginDebugUtilsLabelEXT:
      return "vkCmdBeginDebugUtilsLabelEXT";
    case Command::Type::kCmdEndDebugUtilsLabelEXT:
      return "vkCmdEndDebugUtilsLabelEXT";
    case Command::Type::kCmdInsertDebugUtilsLabelEXT:
      return "vkCmdInsertDebugUtilsLabelEXT";
    case Command::Type::kCmdWriteBufferMarkerAMD:
      return "vkCmdWriteBufferMarkerAMD";
    case Command::Type::kCmdBeginRenderPass2:
      return "vkCmdBeginRenderPass2";
    case Command::Type::kCmdBeginRenderPass2KHR:
      return "vkCmdBeginRenderPass2KHR";
    case Command::Type::kCmdNextSubpass2:
      return "vkCmdNextSubpass2";
    case Command::Type::kCmdNextSubpass2KHR:
      return "vkCmdNextSubpass2KHR";
    case Command::Type::kCmdEndRenderPass2:
      return "vkCmdEndRenderPass2";
    case Command::Type::kCmdEndRenderPass2KHR:
      return "vkCmdEndRenderPass2KHR";
    case Command::Type::kCmdDrawIndirectCount:
      return "vkCmdDrawIndirectCount";
    case Command::Type::kCmdDrawIndirectCountKHR:
      return "vkCmdDrawIndirectCountKHR";
    case Command::Type::kCmdDrawIndirectCountAMD:
      return "vkCmdDrawIndirectCountAMD";
    case Command::Type::kCmdDrawIndexedIndirectCount:
      return "vkCmdDrawIndexedIndirectCount";
    case Command::Type::kCmdDrawIndexedIndirectCountKHR:
      return "vkCmdDrawIndexedIndirectCountKHR";
    case Command::Type::kCmdDrawIndexedIndirectCountAMD:
      return "vkCmdDrawIndexedIndirectCountAMD";
    case Command::Type::kCmdCopyAccelerationStructureKHR:
      return "vkCmdCopyAccelerationStructureKHR";
    case Command::Type::kCmdCopyAccelerationStructureToMemoryKHR:
      return "vkCmdCopyAccelerationStructureToMemoryKHR";
    case Command::Type::kCmdCopyMemoryToAccelerationStructureKHR:
      return "vkCmdCopyMemoryToAccelerationStructureKHR";
    case Command::Type::kCmdWriteAccelerationStructuresPropertiesKHR:
      return "vkCmdWriteAccelerationStructuresPropertiesKHR";
    case Command::Type::kCmdTraceRaysKHR:
      return "vkCmdTraceRaysKHR";
    case Command::Type::kCmdTraceRaysIndirectKHR:
      return "vkCmdTraceRaysIndirectKHR";
    case Command::Type::kCmdSetRayTracingPipelineStackSizeKHR:
      return "vkCmdSetRayTracingPipelineStackSizeKHR";
    case Command::Type::kCmdSetLineStippleEXT:
      return "vkCmdSetLineStippleEXT";
    case Command::Type::kCmdBuildAccelerationStructuresKHR:
      return "vkCmdBuildAccelerationStructuresKHR";
    case Command::Type::kCmdBuildAccelerationStructuresIndirectKHR:
      return "vkCmdBuildAccelerationStructuresIndirectKHR";
    case Command::Type::kCmdSetCullModeEXT:
      return "vkCmdSetCullModeEXT";
    case Command::Type::kCmdSetFrontFaceEXT:
      return "vkCmdSetFrontFaceEXT";
    case Command::Type::kCmdSetPrimitiveTopologyEXT:
      return "vkCmdSetPrimitiveTopologyEXT";
    case Command::Type::kCmdSetViewportWithCountEXT:
      return "vkCmdSetViewportWithCountEXT";
    case Command::Type::kCmdSetScissorWithCountEXT:
      return "vkCmdSetScissorWithCountEXT";
    case Command::Type::kCmdBindVertexBuffers2EXT:
      return "vkCmdBindVertexBuffers2EXT";
    case Command::Type::kCmdSetDepthTestEnableEXT:
      return "vkCmdSetDepthTestEnableEXT";
    case Command::Type::kCmdSetDepthWriteEnableEXT:
      return "vkCmdSetDepthWriteEnableEXT";
    case Command::Type::kCmdSetDepthCompareOpEXT:
      return "vkCmdSetDepthCompareOpEXT";
    case Command::Type::kCmdSetDepthBoundsTestEnableEXT:
      return "vkCmdSetDepthBoundsTestEnableEXT";
    case Command::Type::kCmdSetStencilTestEnableEXT:
      return "vkCmdSetStencilTestEnableEXT";
    case Command::Type::kCmdSetStencilOpEXT:
      return "vkCmdSetStencilOpEXT";
    case Command::Type::kCmdSetPatchControlPointsEXT:
      return "vkCmdSetPatchControlPointsEXT";
    case Command::Type::kCmdSetRasterizerDiscardEnableEXT:
      return "vkCmdSetRasterizerDiscardEnableEXT";
    case Command::Type::kCmdSetDepthBiasEnableEXT:
      return "vkCmdSetDepthBiasEnableEXT";
    case Command::Type::kCmdSetLogicOpEXT:
      return "vkCmdSetLogicOpEXT";
    case Command::Type::kCmdSetPrimitiveRestartEnableEXT:
      return "vkCmdSetPrimitiveRestartEnableEXT";
    case Command::Type::kCmdCopyBuffer2KHR:
      return "vkCmdCopyBuffer2KHR";
    case Command::Type::kCmdCopyImage2KHR:
      return "vkCmdCopyImage2KHR";
    case Command::Type::kCmdBlitImage2KHR:
      return "vkCmdBlitImage2KHR";
    case Command::Type::kCmdCopyBufferToImage2KHR:
      return "vkCmdCopyBufferToImage2KHR";
    case Command::Type::kCmdCopyImageToBuffer2KHR:
      return "vkCmdCopyImageToBuffer2KHR";
    case Command::Type::kCmdResolveImage2KHR:
      return "vkCmdResolveImage2KHR";
    case Command::Type::kCmdSetFragmentShadingRateKHR:
      return "vkCmdSetFragmentShadingRateKHR";
    case Command::Type::kCmdSetVertexInputEXT:
      return "vkCmdSetVertexInputEXT";
    case Command::Type::kCmdSetColorWriteEnableEXT:
      return "vkCmdSetColorWriteEnableEXT";
    case Command::Type::kCmdSetEvent2KHR:
      return "vkCmdSetEvent2KHR";
    case Command::Type::kCmdResetEvent2KHR:
      return "vkCmdResetEvent2KHR";
    case Command::Type::kCmdWaitEvents2KHR:
      return "vkCmdWaitEvents2KHR";
    case Command::Type::kCmdPipelineBarrier2KHR:
      return "vkCmdPipelineBarrier2KHR";
    case Command::Type::kCmdWriteTimestamp2KHR:
      return "vkCmdWriteTimestamp2KHR";
    case Command::Type::kCmdWriteBufferMarker2AMD:
      return "vkCmdWriteBufferMarker2AMD";
    case Command::Type::kBeginCommandBuffer:
      return "vkBeginCommandBuffer";
    case Command::Type::kEndCommandBuffer:
      return "vkEndCommandBuffer";
    case Command::Type::kResetCommandBuffer:
      return "vkResetCommandBuffer";
    case Command::Type::kCmdBindPipeline:
      return "vkCmdBindPipeline";
    case Command::Type::kCmdSetViewport:
      return "vkCmdSetViewport";
    case Command::Type::kCmdSetScissor:
      return "vkCmdSetScissor";
    case Command::Type::kCmdSetLineWidth:
      return "vkCmdSetLineWidth";
    case Command::Type::kCmdSetDepthBias:
      return "vkCmdSetDepthBias";
    case Command::Type::kCmdSetBlendConstants:
      return "vkCmdSetBlendConstants";
    case Command::Type::kCmdSetDepthBounds:
      return "vkCmdSetDepthBounds";
    case Command::Type::kCmdSetStencilCompareMask:
      return "vkCmdSetStencilCompareMask";
    case Command::Type::kCmdSetStencilWriteMask:
      return "vkCmdSetStencilWriteMask";
    case Command::Type::kCmdSetStencilReference:
      return "vkCmdSetStencilReference";
    case Command::Type::kCmdBindDescriptorSets:
      return "vkCmdBindDescriptorSets";
    case Command::Type::kCmdBindIndexBuffer:
      return "vkCmdBindIndexBuffer";
    case Command::Type::kCmdBindVertexBuffers:
      return "vkCmdBindVertexBuffers";
    case Command::Type::kCmdDraw:
      return "vkCmdDraw";
    case Command::Type::kCmdDrawIndexed:
      return "vkCmdDrawIndexed";
    case Command::Type::kCmdDrawIndirect:
      return "vkCmdDrawIndirect";
    case Command::Type::kCmdDrawIndexedIndirect:
      return "vkCmdDrawIndexedIndirect";
    case Command::Type::kCmdDispatch:
      return "vkCmdDispatch";
    case Command::Type::kCmdDispatchIndirect:
      return "vkCmdDispatchIndirect";
    case Command::Type::kCmdCopyBuffer:
      return "vkCmdCopyBuffer";
    case Command::Type::kCmdCopyImage:
      return "vkCmdCopyImage";
    case Command::Type::kCmdBlitImage:
      return "vkCmdBlitImage";
    case Command::Type::kCmdCopyBufferToImage:
      return "vkCmdCopyBufferToImage";
    case Command::Type::kCmdCopyImageToBuffer:
      return "vkCmdCopyImageToBuffer";
    case Command::Type::kCmdUpdateBuffer:
      return "vkCmdUpdateBuffer";
    case Command::Type::kCmdFillBuffer:
      return "vkCmdFillBuffer";
    case Command::Type::kCmdClearColorImage:
      return "vkCmdClearColorImage";
    case Command::Type::kCmdClearDepthStencilImage:
      return "vkCmdClearDepthStencilImage";
    case Command::Type::kCmdClearAttachments:
      return "vkCmdClearAttachments";
    case Command::Type::kCmdResolveImage:
      return "vkCmdResolveImage";
    case Command::Type::kCmdSetEvent:
      return "vkCmdSetEvent";
    case Command::Type::kCmdResetEvent:
      return "vkCmdResetEvent";
    case Command::Type::kCmdWaitEvents:
      return "vkCmdWaitEvents";
    case Command::Type::kCmdPipelineBarrier:
      return "vkCmdPipelineBarrier";
    case Command::Type::kCmdBeginQuery:
      return "vkCmdBeginQuery";
    case Command::Type::kCmdEndQuery:
      return "vkCmdEndQuery";
    case Command::Type::kCmdResetQueryPool:
      return "vkCmdResetQueryPool";
    case Command::Type::kCmdWriteTimestamp:
      return "vkCmdWriteTimestamp";
    case Command::Type::kCmdCopyQueryPoolResults:
      return "vkCmdCopyQueryPoolResults";
    case Command::Type::kCmdPushConstants:
      return "vkCmdPushConstants";
    case Command::Type::kCmdBeginRenderPass:
      return "vkCmdBeginRenderPass";
    case Command::Type::kCmdNextSubpass:
      return "vkCmdNextSubpass";
    case Command::Type::kCmdEndRenderPass:
      return "vkCmdEndRenderPass";
    case Command::Type::kCmdExecuteCommands:
      return "vkCmdExecuteCommands";
#ifdef VK_USE_PLATFORM_GGP

#endif  // VK_USE_PLATFORM_GGP
  }
}
