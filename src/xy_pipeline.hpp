#pragma once

#include <string>
#include <vector>
#include "xy_device.hpp"

namespace xy{
    struct PipelineConfigInfo{

    };

    class XyPipeline{
        public:
            XyPipeline(XyDevice &device, const std::string vertFilePath,const std::string fragFilePath,const PipelineConfigInfo configInfo);
            ~XyPipeline(){}
            XyPipeline(const XyPipeline&) = delete;
            void operator=(const XyPipeline&) = delete;
            static PipelineConfigInfo defaultPipelineConfigInfo(uint32_t width, uint32_t height);
        private:
            static std::vector<char> readFile(const std::string filePath);
            void createGraphicsPipeline(const std::string &vertFilePath,const std::string &fragFilePath,PipelineConfigInfo configInfo);

        void createShaderMoule(const std::vector<char>&code , VkShaderModule* shaderModule);

        XyDevice &xyDevice;
        VkPipeline graphicsPipeline;
        VkShaderModule vertShaderModule;
        VkShaderModule fragShaderModule;
    };
}