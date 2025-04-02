//
// Created by bisgin on 3/29/2025.
//

#include "Queue.h"
#include<iostream>
using namespace std;

template<class T>
bool Queue<T>::isEmpty() {
    return front==NULL;
}

template<class T>
void Queue<T>::add(T theElement) {
if (isEmpty()) {
    front=back=new Node<T>(theElement, NULL); //inserting the first node and there's no one after me
}else {
    Node<T>*temp = new Node<T>(theElement, NULL);
    back->setLink(temp); //temp is holding the address of the newly created node
    back=back->getLink(); //back will see the address of the newly cread node.
}

}

template<class T>
void Queue<T>::display() {
Node<T> *mario = front;
    while(mario!=NULL) {
        cout<<mario->data<<" ";
        mario=mario->link;
    }
   cout<<endl;
}

template<class T>
T Queue<T>::remove() {
    if (isEmpty()) {
        cout<<"Queue is empty"<<endl;
        return(-1);
    }else {
        Node<T> *discard = front;
        T result = front->data;
        front=front->link;
        delete discard;
        if (front==NULL) {
            back = NULL;
        }
        return result;
    }



}