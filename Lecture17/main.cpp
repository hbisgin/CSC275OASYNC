#include <iostream>
#include "Pair.h"
#include "Vector.h"
#include "Pair.cpp" // "C:/myfiles/CSC275/Lec17/src/file.cpp"
#include "Array.h"
using namespace std;

template<class T>
T addUP(Pair<T> pair) {
    return pair.getFirst()+pair.getSecond();
}

int main() {
    Fruit fruit1("Banana", .49), fruit2("Orange", 1.0);
    Vector v1(1,3), v2(4,5); //my goal is to add them up
    Pair<int> p1(2,3);
    Pair<char> p2('A', 'B');
    Pair<string> p3("Adam","Eve");
    Pair<Fruit>fpair(fruit1, fruit2); //showPair would throw an error. No << overloaded.
    p1.showPair();
    p2.showPair();
    p3.showPair();
    //fpair.showPair(); //<< operator has not been defined.

    cout<<addUP(p1)<<endl;

    Pair<Vector> vpair(v1,v2);
    cout<<addUP(vpair)<<endl;

    Array<int> iarray(10);
    Array<char> charray(5);
    charray.addElement('a');
    charray.addElement('b');
    charray.addElement('c');
    charray.addElement('d');
    charray.addElement('e');

    for(int i=0;i<10;i++) {
        iarray.addElement(i+1);
    }

    for (int i=0;i<10;i++) {
        cout<<iarray[i]<<endl;
    }

    for(int i=0;i<5;i++) {
        cout<<charray[i]<<endl;
    }

    return 0;
}