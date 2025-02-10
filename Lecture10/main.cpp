#include <iostream>
#include <ranges>
using namespace std;
int* doubler(int a[], int size) {
    int* temp = new int[size];
    for (int i = 0; i < size; i++) {
        temp[i] = 2*a[i];
    }
    return temp;
}

class Point {
public:
    Point():x(0), y(0){}
    Point(int _x, int _y){this->x = _x; this->y = _y;}
    void showPoints();
private:
    int x, y;
};

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

private:
    int *ptr; //pointer should be handled with care
    int capacity;
    int used;
};


void foo(Array obj) {

}
int main() {
    Point p1(-100, 100), p2;
    Array aObj, bObj(4); //Array object has been created
    aObj.addElement(100);
    aObj.addElement(200);
    aObj[1] = 500;
    for (int i = 0; i < aObj.getUsed(); i++) {
        cout<<aObj[i]<<endl;
    }
    p1.showPoints();
    foo(aObj);

    bObj = aObj;
    for (int i = 0; i < bObj.getUsed(); i++) {
        cout<<bObj[i]<<endl;
    }

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = doubler(a, 10);
    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
    for (int i = 0; i < 10; i++) {
        cout << ptr[i] << endl; //acting like an array
        cout << *(ptr+i)<<endl;  //dereferencing at different locations.
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

void Point::showPoints() {
    cout << "x = " << this->x << endl;
    cout << "y = " << this->y << endl;
}

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

    if (this == &rhs) {
        return *this;
    }else {
        capacity = rhs.capacity;
        used = rhs.used;
        delete [] ptr; //free the memory
        ptr = new int[capacity];
        for (int i = 0; i < used; i++) {
            ptr[i] = rhs.ptr[i];//copy all elements

        }
        return *this;
    }
}