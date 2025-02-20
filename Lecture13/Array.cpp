//
// Created by bisgin on 2/18/2025.
//

#include "Array.h"


Array::Array(const Array &org) {
    capacity = org.capacity;
    used = org.used;
    ptr = new int[capacity];
    for (int i = 0; i < used; i++) {
        ptr[i] = org.ptr[i];
    }
    cout<<"a local copy has been created"<<endl;
}

void Array::addElement(int element) {
    ptr[used] = element;
    used++;
}

Array& Array::operator=(const Array &rhs) {

    if (this == &rhs)
        return *this;

    capacity = rhs.capacity;
    used = rhs.used;
    delete [] ptr; //free the memory
    ptr = new int[capacity];
    for (int i = 0; i < used; i++) {
        ptr[i] = rhs.ptr[i];//copy all elements

    }
    return *this;

}
