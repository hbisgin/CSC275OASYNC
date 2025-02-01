#include <iostream>
using namespace std;

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

int main() {
    Fruit f1, f2("Oranges", 2.49);
    Vector v1, v2(2,5), v3; //v1(1,1)
    if (f1==f2) { //I should overload ==
        cout << "Prices of the fruits are equal" << endl;
    }else {
        cout << "Prices of the fruits are not equal" << endl;
    }

    v3 = v1+v2;
    cout<<v3.getX()<<" "<<v3.getY()<<endl;
    v3 = -v3; //- is the unary operator here.
    cout<<v3.getX()<<" "<<v3.getY()<<endl;
    cout<<(v2-v1).getX()<<" "<<(v2-v1).getY()<<endl; //minus sign/operator is the binary case
    cout<<(v3+3).getX()<<" "<<(v3+3).getY()<<endl; //non-member works here
    //cout<<(3-v3).getX()<<" "<<(3-v3).getY()<<endl; //you can't do it with a member function
    cout<<(v3-3).getX()<<" "<<(v3-3).getY()<<endl; //even though it is a member function, it takes the constant as the second parameter

    return 0;
}

Vector Vector::operator -(const Vector & vRHS) {
    return Vector(x-vRHS.x,y-vRHS.y);
}