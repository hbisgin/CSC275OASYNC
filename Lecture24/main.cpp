#include <iostream>
using namespace std;

class NoGas {
public:
    NoGas() {}
    NoGas(double _mile):mile(_mile){}
    double getMile() {return mile;}
private:
    double mile;
};

class NegativeNumber {
public:
    NegativeNumber() {}
    NegativeNumber(string s):message(s) {}
    string getMessage() {return message;}
private:
    string message;
};

class DivisionByZero {};

int main() {
    double mile, gallon;
    cout<<"How many miles?"<<endl;
    cin>>mile;
    cout<<"How many gallons?"<<endl;
    cin>>gallon;

    try {
        if (gallon<=0)
            throw gallon; //as soon as you hit the throw you'll be sent to the catch block
        //remaining statements will not be executed. like a return statement
        cout<<"I'm inside the try block"<<endl;
        cout<<mile/gallon<<endl;
    }catch (double e){
        cout<<"There is a gallon issue "<<e<<endl;
    }

    try {
        if (gallon<=0)
            throw NoGas(mile);
        cout<<"I'm inside the try block for NoGas class"<<endl;
        cout<<mile/gallon<<endl;
    }catch (NoGas e) {
        cout<<"There is a gallon issue because the amount of gas is <=0 for"<<endl;
        cout<<e.getMile()<<" miles "<<endl;
    }

    try {
        if (mile<0)
            throw NegativeNumber(" negative miles");
        if (gallon<0)
            throw NegativeNumber(" negative gallons");

        if (gallon!=0) {
            cout<<"I'm inside the try block for NegativeNumber class"<<endl;
            cout<<mile/gallon<<endl;
        }else {
            throw DivisionByZero();
        }

    }catch (NegativeNumber e) {
            cout<<e.getMessage()<<endl;
    }catch (DivisionByZero) {
            cout<<"You should not divide by 0"<<endl;
    }
    cout<<"Thank you for using our program"<<endl; //the program still works fine despite <=0 gallon amount
    return 0;
}