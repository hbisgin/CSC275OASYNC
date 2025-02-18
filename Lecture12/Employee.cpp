//
// Created by bisgin on 2/15/2025.
//

#include "Employee.h"

namespace Payroll {
    void Employee::setName(string _name) {
        name = _name;
    }
    void Employee::setSsn(int _ssn) {
        ssn = _ssn;
    }
    void Employee::setSalary(float _salary) {
        salary = _salary;
    }
    string Employee::getName() { return name;}
    int Employee::getSsn() { return ssn; }
    float Employee::getSalary() { return salary; }

    void Employee::showInfo() {
        cout<<"Maybe you should not call this function. I'll tell more about it"<<endl;

    }

} // Payroll