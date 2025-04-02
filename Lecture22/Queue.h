//
// Created by bisgin on 3/29/2025.
//

#ifndef QUEUE_H
#define QUEUE_H



#include <iostream>
#include "listtoolshb.h"
using namespace std;

template<class T>
class Queue {

public:
    Queue():front(NULL), back(NULL){}
    void add(T theElement);
    bool isEmpty();
    void display();
    T remove();
private:
    Node<T> *front; //like a head pointer
    Node<T> *back; //this is for the last node
};



#endif //QUEUE_H
