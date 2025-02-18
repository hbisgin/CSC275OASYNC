#include <iostream>
//#include "Employee.h"
#include "HourlyEmployee.h"
using namespace std;
using namespace Payroll;
int main() {
    Employee emp("Mike", 345, 4500); //Maybe you should not bre creating this object,
    //however, I'd like to show you that this could be created just because you're including HourlyEmployee.h which
    //also includes Employee.h
    HourlyEmployee hourly_employee, hourly_employee2("Adam", 567, 5000, 20, 40);
    cout<<hourly_employee.getName()<<endl;

    emp.showInfo();
    hourly_employee.showInfo();
    hourly_employee2.showInfo();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}