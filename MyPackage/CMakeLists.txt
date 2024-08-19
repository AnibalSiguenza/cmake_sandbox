# HelloWorldProject/MyPackage/CMakeLists.txt

# Create a library from the package source files
add_library(MyPackage src/MyPackage.cpp)
target_include_directories(MyPackage PUBLIC include)
