cmake_minimum_required(VERSION 3.23)

set(PATCH_VERSION "1" CACHE STRING "Patch version provided by GitHub Actions")
project(software_architecture
    LANGUAGES CXX
    VERSION 1.0.${PATCH_VERSION}
)

add_executable(main 
    ${CMAKE_CURRENT_SOURCE_DIR}/source/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/Controller.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/Model.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/Primitive.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/Square.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/source/View.cpp
)

target_include_directories(main
    PRIVATE
        ${CMAKE_SOURCE_DIR}/include
)


set(CPACK_PACKAGE_NAME "graphics")
set(CPACK_PACKAGE_VENDOR "nom4")
set(CPACK_PACKAGE_CONTACT "nom4@tpu.ru")
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "Vector Graphic application")

if(APPLE)
    set(CPACK_GENERATOR "DragNDrop")
elseif(UNIX)
    set(CPACK_GENERATOR "DEB")
    set(CPACK_DEBIAN_PACKAGE_MAINTAINER "nom4@tpu.ru")
endif()

include(CPack)
