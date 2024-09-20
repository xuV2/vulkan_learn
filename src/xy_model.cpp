#include "xy_model.hpp"

#include <cassert>
namespace xy{
            XyModel::XyModel(XyDevice &device,const std::vector<Vertex>&vertices):xyDevice{device}{
                createVertexBuffers(vertices);
            }
            XyModel::~XyModel(){
                vkDestroyBuffer(xyDevice.device(),vertexBuffer,nullptr);
                vkFreeMemory(xyDevice.device(),vertexBufferMemory,nullptr);
            }
            void XyModel::createVertexBuffers(const std::vector<Vertex> &vertices){
                vertexCount =static_cast<uint32_t>(vertices.size());
                assert(vertexCount>=3 && "Vertex count must be least 3");
                VkDeviceSize bufferSize = sizeof(vertices[0]) * vertexCount;

            }

}