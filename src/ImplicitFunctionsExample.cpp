#include "ImplicitFunctionsExample.hpp"

ImplicitFunctionsExample::ImplicitFunctionsExample() {
    std::cout << "Default constructor called" << std::endl;
}

ImplicitFunctionsExample::~ImplicitFunctionsExample() {
    std::cout << "ImplicitFunctionsExample Destructor called" << std::endl;
}

ImplicitFunctionsExample::ImplicitFunctionsExample(const ImplicitFunctionsExample& other) {
    std::cout << "Copy constructor called for ImplicitFunctions" << std::endl;
}

ImplicitFunctionsExample& ImplicitFunctionsExample::operator=(const ImplicitFunctionsExample& other) {
    std::cout << "Copy assignment operator called for ImplicitFunctions" << std::endl;
    return *this;
}

ImplicitFunctionsExample::ImplicitFunctionsExample(ImplicitFunctionsExample&& other) noexcept {
    std::cout << "Move constructor called for ImplicitFunctions" << std::endl;
}

ImplicitFunctionsExample& ImplicitFunctionsExample::operator=(ImplicitFunctionsExample&& other) noexcept {
    std::cout << "Move assignment operator called for ImplicitFunctions" << std::endl;
    return *this;
}