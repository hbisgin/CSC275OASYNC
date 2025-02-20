//
// Created by bisgin on 2/18/2025.
//

#include "ArrayBackUp.h"

ArrayBackUp::ArrayBackUp():Array(), usedB(0) {
    b = new int[capacity]; //capacity is protected and coming from my parent class, Array
}

ArrayBackUp::ArrayBackUp(int _size):Array(_size), usedB(0) {
    b = new int[capacity]; //note that Array constructor will make capacity equal to the _size
}

ArrayBackUp::ArrayBackUp(const ArrayBackUp &other):Array(other), usedB(0) {
    b = new int[capacity];
    usedB = other.usedB;
    for (int i = 0; i < usedB; i++)
        b[i] = other.b[i];

}

ArrayBackUp& ArrayBackUp::operator=(const ArrayBackUp &rhs) { //c1=c2; c2 is the RHS
    Array::operator=(rhs);
    if (capacity != rhs.capacity) {
        delete[] b;
        b = new int[rhs.capacity];
    }
    usedB = rhs.usedB;
    for (int i = 0; i < usedB; i++)
        b[i] = rhs.b[i];

    return *this;
}

ArrayBackUp::~ArrayBackUp() {
    delete[] b; //delete the pointer so that you will free the memory. No memory leak, no dangling pointers!!!!
}

void ArrayBackUp::backUp() {
    usedB = used;
    for (int i = 0; i < used; i++)
        b[i] = ptr[i];
}




