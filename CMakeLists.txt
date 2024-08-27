cmake_minimum_required(VERSION 3.16)

project(iLive_webRTC_API)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE "Debug")	

aux_source_directory(src SRC_LIST)
include_directories(include)

add_library(iLive_webRTC_API_plugin_A STATIC ${SRC_LIST})

add_library(iLive_webRTC_API_plugin_SO SHARED ${SRC_LIST})

set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_SOURCE_DIR}/lib)

add_executable(iLive_webRTC_API ${SRC_LIST})