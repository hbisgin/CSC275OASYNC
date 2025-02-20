//
// Created by bisgin on 2/15/2025.
//

#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<iostream>
#include<string>
using namespace std;

namespace Payroll {

    class Employee {
    public:
        Employee():name("John Doe"), ssn(123), salary(0){}
        Employee(string _name, int _ssn, float _salary):name(_name), ssn(_ssn), salary(_salary){}
        void setName(string _name);
        void setSsn(int _ssn);
        void setSalary(float _salary);
        string getName();
        int getSsn();
        float getSalary();
        void showInfo ();
    protected: //this is now on protected, meaning child class will have direct access
        string name;
        int ssn;
        float salary;

    };

} // Payroll

#endif //EMPLOYEE_H
