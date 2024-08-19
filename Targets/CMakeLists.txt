cmake_minimum_required(VERSION 3.10)

project(HelloWorld)

# Add the executable for the main program
add_executable(HelloWorld main.cpp)

# Link the MyPackage library to the main program
target_link_libraries(HelloWorld PRIVATE MyLibrary)