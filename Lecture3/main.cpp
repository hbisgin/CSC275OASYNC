#include <iostream>
using namespace std;

class Fruit { //how to define a class. Note that these are all public members.
public: //due to this public keyword
    string name;
    float weight;
    float price;
    void displayInfo(); //method here, you can define your methods here, but wait!
};

int main() { //driver method
    Fruit fruit1, fruit2; //both have the same set of data and function members.
    fruit1.name = "Banana";
    fruit1.price = .49;
    fruit1.weight = .5;
    fruit1.displayInfo(); //called the displayInfo() method
    fruit2.name = "Apples";
    fruit2.price = 1.49;
    fruit2.weight = 1;
    std::cout << "Hello, World!" <<fruit1.name<<std::endl;
    fruit2.displayInfo();
    return 0;
}

void Fruit::displayInfo() {
 //even the body is empty, it worked without an error.
    cout<<"Name: "<<name<<endl;
    cout<<"Price: "<<price<<endl;
    cout<<"Weight: "<<weight<<endl;
}
