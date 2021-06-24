//
//  VulkanLoadingFunctions.hpp
//  VulkanTutorial
//
//  Created by Vitaly Cloud on 30.05.2021.
//

#ifndef VulkanLoadingFunctions_hpp
#define VulkanLoadingFunctions_hpp

#include <vulkan/vulkan.h>

//LOADING NEEDED FUNCTIONS FROM EXTENSION

VkResult CreateDebugUtilsMessengerEXT(VkInstance instance,
                                      const VkDebugUtilsMessengerCreateInfoEXT* pCreateInfo,
                                      const VkAllocationCallbacks* pAllocator,
                                      VkDebugUtilsMessengerEXT* pDebugMessenger);

void DestroyDebugUtilsMessengerEXT(VkInstance instance,
                                   VkDebugUtilsMessengerEXT debugMessenger,
                                   const VkAllocationCallbacks* pAllocator);

#endif /* VulkanLoadingFunctions_hpp */
