//
// Created by bisgin on 3/9/2025.
//


#include <iostream>
using namespace std;
#ifndef VECTOR_H
#define VECTOR_H
class Vector {
public:
    Vector():x(1), y(1){}
    Vector(int _x):x(_x), y(1){} //this constructor takes one parameter which is basically for x.
    Vector(int _x, int _y):x(_x), y(_y){}
    int getX() const {return x;}
    int getY() const {return y;}
    Vector operator -(const Vector & vRHS); //member overloaded operator
private:
    int x, y;
};

class Fruit {
public:
    Fruit():name("Apples"), price(0.49){}
    Fruit(string _name, float _price):name(_name), price(_price){}
    float getPrice() {return price;} //inlining
private:
    string name;
    float price;
};

bool operator == (Fruit f1, Fruit f2) {
    return f1.getPrice() == f2.getPrice(); //if it holds it will return true
}

const Vector operator + (const Vector &v1, const Vector &v2) { //non-member
    //Explicit constructor call, which we did earlier
    int xx = v1.getX() + v2.getX();
    int yy = v1.getY() + v2.getY();
    return Vector(xx, yy);
}

const Vector operator - (const Vector &v) {
    return Vector(-v.getX(), -v.getY());
}

ostream & operator << (ostream &os, const Vector &v){
    os << "(" << v.getX() << ", " << v.getY() << ")";
    return os;
}
#endif //VECTOR_H
