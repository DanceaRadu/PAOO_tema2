#ifndef IMPLICITFUNCTIONSEXAMPLE_HPP
#define IMPLICITFUNCTIONSEXAMPLE_HPP

#include <iostream>

class ImplicitFunctionsExample {
public:
    ImplicitFunctionsExample();
    ~ImplicitFunctionsExample();
    ImplicitFunctionsExample(const ImplicitFunctionsExample& other);
    ImplicitFunctionsExample& operator=(const ImplicitFunctionsExample& other);
    ImplicitFunctionsExample(ImplicitFunctionsExample&& other) noexcept;
    ImplicitFunctionsExample& operator=(ImplicitFunctionsExample&& other) noexcept;
};

#endif