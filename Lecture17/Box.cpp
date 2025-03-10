//
// Created by bisgin on 3/5/2025.
//

#include "Box.h"

#include<iostream>
using namespace std;

// Function to display the value

template<class T>
void Box<T>::display() const {
    cout << "The value is: " << value << endl;
}
