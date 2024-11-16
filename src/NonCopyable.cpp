#include "NonCopyable.hpp"

NonCopyable::NonCopyable() {
    std::cout << "NonCopyable object constructed" << std::endl;
}

NonCopyable::~NonCopyable() {
    std::cout << "NonCopyable object destructed" << std::endl;
}