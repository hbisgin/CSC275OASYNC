//
// Created by bisgin on 3/29/2025.
//

#ifndef STACK_H
#define STACK_H



#include <iostream>
#include "listtoolshb.h"
using namespace std;

template<class T>
class Stack {

public:
    Stack():top(NULL){}
    void push(T theElement);
    bool isEmpty();
    void display();
    T pop();
private:
    Node<T> *top; //like a head pointer
};



#endif //STACK_H
