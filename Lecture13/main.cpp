#include <iostream>
#include "ArrayBackUp.h"
#include "HourlyEmployee.h"
using namespace std;


int main() {
    Payroll::HourlyEmployee hEmployee;
    hEmployee.showInfo(); //this showInfo is from the child class
    cout<<"******************"<<endl;
    hEmployee.Employee::showInfo(); //this showInfo is from the parent class
    cout<<"******************"<<endl;

    Array aObj(10), bObj(10);
    ArrayBackUp aBackup(10), bBackup(10);


    for (int i = 0; i < 10; i++) {
        aObj.addElement(i);
        aBackup.addElement(i+1); //still working on the ptr from the base class.
    }

    bObj=aObj;
    bBackup=aBackup;
    cout<<"******************"<<endl;
    for (int i = 0; i < 10; i++) {
        //cout << aObj[i] << endl;
        cout << bObj[i] << endl;
        cout<<bBackup[i]<<endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}