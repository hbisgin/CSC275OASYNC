#include <iostream>

using namespace std;

struct Date{int day, month, year;};

struct Department{
    string dName;
    int dID;
};

struct Employee{
    string fName;
    string lName;
    Date start_date;
    Department dept;
};

enum Month{
    Jan=1, Feb, Mar, Apr, May, June, July, Aug, Sep, Oct, Nov, Dec //words, or like strings
}; //enumerate will designate integers starting from a number (default is 0) for each word you have
int main() {
    std::cout << "Hello, World!" << std::endl;
    Month m = Jan; //Jan is not string. Therefore, I don't use "
    cout<<m<<endl;

    Date start = {1, 1, 2024};
    Employee e1 ={"John", "Doe", start, {"IT", 101} };
    cout<<e1.fName<<" "<<e1.lName<<endl;
    cout<<e1.start_date.day<<" ";
    cout<<e1.start_date.month<<" ";
    cout<<e1.start_date.year<<endl;
    cout<<e1.dept.dName<<" "<<e1.dept.dID<<endl;
    return 0;
}
