//
//  ShadersHelper.cpp
//  VulkanTutorial
//
//  Created by Vitaly Cloud on 31.05.2021.
//

#include "ShadersHelper.hpp"

#include <fstream>

std::vector<char> readFile(const std::string& filename) {
    std::ifstream file(filename, std::ios::ate | std::ios::binary);
    if(!file.is_open()) {
        throw std::runtime_error("failed to open file!");
    }
    
    size_t fileSize = (size_t) file.tellg();
    std::vector<char> buffer(fileSize);
    file.seekg(0);
    file.read(buffer.data(), fileSize);
    file.close();
    
    assert(fileSize == buffer.size());
    
    return buffer;
}
