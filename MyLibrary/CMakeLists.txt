# Create a static library from the package source files
add_library(MyLibrary STATIC src/MyLibrary.cpp)

# Include the current directory to find the headers
target_include_directories(MyLibrary PUBLIC include)

# Link MyLibrary with MyPackage
target_link_libraries(MyLibrary PRIVATE MyPackage)
