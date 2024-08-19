#include "MyLibrary.h"
#include <iostream>

#include "MyLibrary.h"
#include "MyPackage.h"

namespace MyLibrary {
    void callPackage() {
        std::cout << "calling the package from library" << std::endl;
        MyPackage::sayHello();
    }
}// namespace MyLibrary