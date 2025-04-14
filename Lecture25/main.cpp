#include <iostream>
using namespace std;

class BaseClass{}; //trivial classes

class DerivedClass:public BaseClass{}; //trivial class

class DividebyZero{};

double divide(int top, int bottom) {
    if (bottom == 0)
        throw DividebyZero(); //creating an object of this class and throwing it right away
    return (double)top / bottom;
}

int throwfun(int number) {
   if (number == 0)
       throw DerivedClass();
    return 100/number;
}

int main() {
    int top, bottom;
    cout<<"give be the top number"<<endl;
    cin>>top;
    cout<<"give be the bottom number"<<endl;
    cin>>bottom;

    try {
        cout<<divide(top, bottom)<<endl; //at this point an error has been thrown through the function divide above
    }catch (DividebyZero e) {
        cout<<"divide by zero"<<endl;
    }

    try {
        //cout<<throwfun(bottom)<<endl; //scenario 1
        cout<<divide(top, bottom)<<endl; //scenario 2
    }catch (DerivedClass) {
            cout<<"exception caught for the derived class"<<endl;
    }catch (BaseClass){
        cout<<"exception caught for the base class"<<endl;
    }catch (...) {
        cout<<"exception caught by the default"<<endl;
    }
    return 0;
}