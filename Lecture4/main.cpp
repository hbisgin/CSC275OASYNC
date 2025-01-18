#include <iostream>

using namespace std;

float area(float w, float l) {
    return w * l;
}

float area(float size) { //this function has a different signatures.
    return size * size; //you overload a function because you share the same name above
}


class Fruit {
public:
    void displayInfo();
    void setName(string theName);
    string getName();
    void setWeight(float theWeight);
    float getWeight();
    void setPrice(float thePrice);
    float getPrice();
private:
    string name;
    float weight;
    float price;
};

int main() { //driver method
    Fruit fruit1, fruit2, fruit3; //both have the same set of data and function members.
    string name;
    float weight, price; //these are specific to the main program.

    cout<<area(2,4)<<"\t"<<area(3)<<endl;

    /*fruit1.name = "Banana"; //they are complaining because these data members are private. and I have no direct access
    fruit1.price = .49;
    fruit1.weight = .5;
*/ //this is no longer legal

    fruit1.setName("Banana");
    fruit1.setWeight(.5);
    fruit1.setPrice(.49);



    /*fruit2.name = "Apples";
    fruit2.price = 1.49;
    fruit2.weight = 1;
    */

    fruit2.setName("Apples");
    fruit2.setWeight(1);
    fruit2.setPrice(1.49);

    cout<<"Give information about your Fruits"<<endl;
    cin>>name;
    cin>>price;
    cin>>weight;

    fruit3.setName(name);
    fruit3.setWeight(weight);
    fruit3.setPrice(price);


    //std::cout << "Hello, World!" <<fruit1.name<<std::endl; //NOT LEGAL
    cout<<fruit3.getName()<<"\t"<<fruit3.getWeight()<<"\t"<<fruit3.getPrice()<<endl;
    cout<<"*************************************"<<endl;
    fruit1.displayInfo(); //called the displayInfo() method
    cout<<"*************************************"<<endl;
    fruit2.displayInfo();
    cout<<"*************************************"<<endl;
    fruit3.displayInfo();
    return 0;
}

void Fruit::displayInfo() {
    //even the body is empty, it worked without an error.
    cout<<"Name: "<<name<<endl; //even though these variables, name, price, weight are private
    cout<<"Price: "<<price<<endl; //member methods have direct access.
    cout<<"Weight: "<<weight<<endl;
}

void Fruit::setName(string theName) {
    name = theName; //name variable is the data member of this current class. No worries!
}
string Fruit::getName() {
    return name;
}
void Fruit::setWeight(float theWeight) {
    weight = theWeight;
}
float Fruit::getWeight() {
    return weight;
}
void Fruit::setPrice(float thePrice) {
    price = thePrice;
}
float Fruit::getPrice() {
    return price;
}