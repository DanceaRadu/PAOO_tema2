#include "InitializedObject.hpp"

InitializedObject::InitializedObject(int v) : value(v) {
    std::cout << "InitializedObject constructed with value: " << value << std::endl;
}

int InitializedObject::getValue() const {
    return value;
}
