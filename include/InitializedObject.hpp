#ifndef INITIALIZEDOBJECT_HPP
#define INITIALIZEDOBJECT_HPP

#include <iostream>

class InitializedObject {
private:
    int value;

public:
    InitializedObject(int v);
    int getValue() const;
};

#endif
