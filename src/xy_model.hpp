#pragma once

#include "xy_device.hpp"

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/glm.hpp>

namespace xy{
    class XyModel{
        public:
            struct Vertex {
                glm::vec2 position;
                glm::vec3 color;

                static std::vector<VkVertexInputBindingDescription>getBindingDescriptions();
                static std::vector<VkVertexInputAttributeDescription>getAttributeDescriptions();
            };
            XyModel(XyDevice &device,const std::vector<Vertex>&vertices);
            ~XyModel();

            XyModel(const XyModel&)=delete;
            XyModel &operator=(const XyModel &) = delete;
            void bind(VkCommandBuffer commandBuffer);
            void draw(VkCommandBuffer commandBuffer);
        private:
           void createVertexBuffers(const std::vector<Vertex> &vertices);

           XyDevice &xyDevice;
           VkBuffer vertexBuffer;
           VkDeviceMemory vertexBufferMemory;
           uint32_t vertexCount;
    };
}