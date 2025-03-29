//
// Created by bisgin on 3/29/2025.
//

#include "Stack.h"
#include<iostream>
using namespace std;

template<class T>
bool Stack<T>::isEmpty() {
    return top==NULL;
}

template<class T>
void Stack<T>::push(T theElement) {
    //head = new Node<T>(theData, head); we remember this
    top = new Node<T>(theElement, top);

}

template<class T>
void Stack<T>::display() {
Node<T> *mario = top;
    while(mario!=NULL) {
        cout<<mario->getData()<<" ";
        mario=mario->getLink();
    }
   cout<<endl;
}

template<class T>
T Stack<T>::pop() {
    if (isEmpty()) {
        cout<<"Stack is empty"<<endl;
        return(-1);
    }else {
        T result = top->getData();
        Node<T>* discard;
        discard = top;
        top=top->getLink();
        delete discard;
        return result;
    }

}