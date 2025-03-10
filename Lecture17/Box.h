//
// Created by bisgin on 3/5/2025.
//

#ifndef BOX_H
#define BOX_H



#include <iostream>
using namespace std;

// Template for a class
template <class T>
class Box {
private:
    T value; // Member variable of type T

public:
    // Constructor
    Box(T val) : value(val) {}

    // Getter
    T getValue() const {
        return value;
    }

    // Setter
    void setValue(T val) {
        value = val;
    }
    void display() const;
};

#endif //BOX_H
