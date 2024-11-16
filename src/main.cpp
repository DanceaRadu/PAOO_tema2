#include "NonCopyable.hpp"
#include "InitializedObject.hpp"
#include "ImplicitFunctionsExample.hpp"
#include <iostream>

int main() {

    // Item 4: Instantiating an object
    InitializedObject object1(42);
    std::cout << "Value stored inside of object1: " << object1.getValue() << std::endl; 

    // Item 5: Understanding implicit functions
    ImplicitFunctionsExample example1;
    ImplicitFunctionsExample example2 = example2;
    ImplicitFunctionsExample example3;
    example3 = example1;
    ImplicitFunctionsExample example4 = std::move(example1);

    // Item 6: copy is not allowed so we can only use move
    NonCopyable nc1;
    NonCopyable nc2 = std::move(nc1);

    return 0;
}