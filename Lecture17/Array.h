//
// Created by bisgin on 3/9/2025.
//

#ifndef ARRAY_H
#define ARRAY_H
template <class T>
class Array {
public:
    Array():capacity(2), used(0){ptr = new T[capacity];}
    Array(int size):capacity(size), used(0){ptr = new T[capacity];}
    Array(const Array<T> &org); //copy constructor
    ~Array(){delete [] ptr; cout<<"destructor called"<<endl;}
    void addElement(T element);
    int getCapacity(){return capacity;}
    int getUsed(){return used;}
    T& operator[](int index){return ptr[index];} //array operator
    Array<T>& operator=(const Array<T> &rhs);
protected:
    T *ptr; //pointer should be handled with care
    int capacity;
    int used;
};

template <class T>
Array<T>::Array(const Array<T> &org) {
    capacity = org.capacity;
    used = org.used;
    ptr = new int[capacity];
    for (int i = 0; i < used; i++) {
        ptr[i] = org.ptr[i];
    }
    cout<<"a local copy has been created"<<endl;
}
template <class T>
void Array<T>::addElement(T element) {
    ptr[used] = element;
    used++;
}

template <class T>
Array<T>& Array<T>::operator=(const Array<T> &rhs) {

    if (this == &rhs)
        return *this;

    capacity = rhs.capacity;
    used = rhs.used;
    delete [] ptr; //free the memory
    ptr = new T[capacity];
    for (int i = 0; i < used; i++) {
        ptr[i] = rhs.ptr[i];//copy all elements

    }
    return *this;

}
#endif //ARRAY_H
