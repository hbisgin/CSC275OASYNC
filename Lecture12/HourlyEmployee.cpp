//
// Created by bisgin on 2/15/2025.
//

#include "HourlyEmployee.h"

namespace Payroll {
    void HourlyEmployee::setHourlyRate(float rate) {
        rate = rate;
    }

    void HourlyEmployee::setHours(int hours) {
        hours = hours;
    }
    float HourlyEmployee::getHourlyRate() {return hourlyRate;}
    int HourlyEmployee::getHours()  {return hours;}

    void HourlyEmployee::showInfo() {
        cout<<"Name:"<<getName()<<endl; //I have to call the getter to access base class private data member.
        cout<<"Hourly Employee: "<<hourlyRate<<endl;
        cout<<"Hourly Employee: "<<hours<<endl;
        cout<<"Total is going to be "<<hourlyRate*hours<<endl;
        //salary = hourlyRate*hours; //salary is a private data member of my parent.
        setSalary(hourlyRate*hours);
    }



} // Payroll