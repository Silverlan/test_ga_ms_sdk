# Minimum required CMake version
cmake_minimum_required(VERSION 3.5)

# Project name
project(MyProgram)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
set(SOURCES main.cpp)

# Create executable
add_executable(${PROJECT_NAME} ${SOURCES})
