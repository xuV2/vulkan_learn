#include "xy_pipeline.hpp"

// std
#include <fstream>
#include <stdexcept>
#include <iostream>

namespace xy{
    XyPipeline::XyPipeline(const std::string vertFilePath,const std::string fragFilePath){
        createGraphicsPipeline(vertFilePath,fragFilePath);
    }

    std::vector<char> XyPipeline::readFile(const std::string filePath){
        std::ifstream file(filePath,std::ios::ate|std::ios::binary);
        if(!file.is_open()){
            throw std::runtime_error("can not open file: "+ filePath);
        }
        size_t fileSize = static_cast<size_t>(file.tellg());
        std::vector<char> buffer(fileSize);
        
        file.seekg(0); // 设置文件流的读指针位置。seekg 是 "seek get" 
        file.read(buffer.data(),fileSize);

        file.close();
        return buffer;
    }

     void XyPipeline::createGraphicsPipeline(const std::string &vertFilePath,const std::string &fragFilePath){
        auto vertCode = readFile(vertFilePath);
        auto fragCode = readFile(fragFilePath);

        std::cout<<"Vertex Shader Code Size: "<<vertCode.size()<<"\n";
        std::cout<<"Fragment Shader Code Size: "<<fragCode.size()<<"\n";

     }
}