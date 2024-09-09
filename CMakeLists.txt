cmake_minimum_required(VERSION 3.10)
project(VulkanTutorial)

# 设置使用的 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 包含目录
include_directories(
    D:/minGW/mingw64/include
    D:/vulkan/install/Include
)

# 手动指定库文件路径
link_directories(
    D:/minGW/mingw64/lib
    D:/vulkan/install/Lib 
)

# 可执行文件
add_executable(VulkanApp 
 src/main.cpp
 src/xy_window.cpp
 src/first_app.cpp
 src/xy_pipeline.cpp
  )
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)


# 链接 GLFW, Vulkan 和其他必要的库
target_link_libraries(VulkanApp glfw3 vulkan-1)
