//
// Created by bisgin on 2/18/2025.
//

#ifndef ARRAY_H
#define ARRAY_H



#include <iostream>
using namespace std;


class Array {
public:
    Array():capacity(2), used(0){ptr = new int[capacity];}
    Array(int size):capacity(size), used(0){ptr = new int[capacity];}
    Array(const Array &org); //copy constructor
    ~Array(){delete [] ptr; cout<<"destructor called"<<endl;}
    void addElement(int element);
    int getCapacity(){return capacity;}
    int getUsed(){return used;}
    int& operator[](int index){return ptr[index];} //array operator
    Array& operator=(const Array &rhs);
protected:
    int *ptr; //pointer should be handled with care
    int capacity;
    int used;
};




#endif //ARRAY_H
