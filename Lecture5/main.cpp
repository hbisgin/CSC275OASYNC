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
    Fruit(string theName, float theWeight, float thePrice); //constructor, it's the prototype
    Fruit(string theName, float theWeight);
    Fruit(string theName);
    Fruit(); //doesn't take any parameter, this is an example of function overloading
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

Fruit testFun(string fName) {
    return Fruit(fName); //explicit constructor call
}


int main() { //driver method
    Fruit fruit4; //this is an object creation which would need a default constructor. Don't say fruit4()
    Fruit fruit1("Apple", 2, 2), fruit2("Banana", .50, 3), fruit3("Kiwi", 2, 4); //both have the same set of data and function members.
    Fruit fruit5("Watermelon");
    Fruit fruit6("Orange", 1);
    fruit6 = Fruit("SB", 3, 4); //this is going to create another object and assign it to fruit6
    fruit5 = Fruit();

    Fruit fruit7 = testFun("Blueberry");

    string name;
    fruit1.displayInfo(); //called the displayInfo() method
    cout<<"*************************************"<<endl;
    fruit2.displayInfo();
    cout<<"*************************************"<<endl;
    fruit3.displayInfo();
    cout<<"*************************************"<<endl;
    fruit4.displayInfo();
    cout<<"*************************************"<<endl;
    fruit5.displayInfo();
    cout<<"*************************************"<<endl;
    fruit6.displayInfo();
    cout<<"*************************************"<<endl;
    fruit7.displayInfo();

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

//the list after colon is called an initialization list.
Fruit::Fruit(string theName, float theWeight, float thePrice):name(theName), weight(theWeight), price(thePrice) {

    /*name = theName;
    weight = theWeight;
    price = thePrice;
    */ //this is still good, however let's look into initialization list
}
Fruit::Fruit(string theName, float theWeight):name(theName), weight(theWeight), price(0) {}

Fruit::Fruit(string theName):name(theName), weight(0), price(0) {}

Fruit::Fruit():name("Bananas"), weight(0), price(0) {}


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