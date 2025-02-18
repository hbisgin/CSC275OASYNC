//
// Created by bisgin on 2/15/2025.
//

#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include "Employee.h"
#include<iostream>
using namespace std;
namespace Payroll {

class HourlyEmployee:public Employee { //this is the first step I imply that I'm inheriting from Employee
public:
    HourlyEmployee():Employee(), hourlyRate(15), hours(20){} //I put my own default constructor
    HourlyEmployee(string _name, int _ssn, float _salary, float _hourlyRate, int _hours):Employee(_name, _ssn, _salary), hourlyRate(_hourlyRate), hours(_hours){}
    void setHourlyRate(float rate);
    float getHourlyRate();
    void setHours(int hours);
    int getHours();
    void showInfo();
private:
    float hourlyRate;
    int hours;
};

} // Payroll

#endif //HOURLYEMPLOYEE_H
