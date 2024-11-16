#ifndef NONCOPYABLE_HPP
#define NONCOPYABLE_HPP

#include <iostream>

class NonCopyable {
public:
    NonCopyable();
    ~NonCopyable();

    // disable copy constructor and copy assignment operator
    NonCopyable(const NonCopyable&) = delete;
    NonCopyable& operator=(const NonCopyable&) = delete;

    // allow move constructor  and move assignment operator
    NonCopyable(NonCopyable&&) = default;
    NonCopyable& operator=(NonCopyable&&) = default;
};

#endif