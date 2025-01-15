#include<iostream>
using namespace std;
const int SIZE=3;
int doubleMe(int a) { //pass by value
    a=2*a;
    return a;
}

void doubleAgain(int &a) { //pass by reference
    a = 2*a;
}

struct Date {
    int year;
    int month;
    int day;
};

struct Student {
    int ID;
    string name;
    Date dob;
};

void getDate(Date & date);

enum Day {
    Monday, Tuesday, Wednesday, Thursday, Saturday, Sunday
};

int main() {
    Day today = Monday;
    today = Day(2); // casting an integer to a Day value.
    cout<<"Today is "<<today<<endl;

    switch (today) {
        case Monday:
            cout<<"Monday"<<endl;
        case Tuesday:
            cout<<"Tuesday"<<endl;
        case Wednesday:
            cout<<"Wednesday"<<endl;
        default:
            cout<<"Not a good idea!"<<endl;
    }


    Student s1, s2={1, "Mary", {1990,1,19} };
    Date d1 = {1980,1,19};
    Student s3 = {7, "James", d1};

    s1.ID = 10;
    s1.name = "John";
    s1.dob.day = 18; //dob is an instance of Date struct. You should use dot operatpr for dob as well
    s1.dob.month = 12;
    s1.dob.year = 1988;

    Student students[SIZE] = {s1, s2, s3};

    int a = 2;
    cout << doubleMe(a) << endl;
    cout<<"a: "<<a<<endl;
    doubleAgain(a);
    cout<<"a: "<<a<<endl;

    cout<<s1.name<<"\t"<<s1.ID<<"\t"<<s1.dob.day<<"\t"<<s1.dob.month<<"\t"<<s1.dob.year<<endl;
    cout<<s2.name<<"\t"<<s2.ID<<"\t"<<s2.dob.day<<"\t"<<s2.dob.month<<"\t"<<s2.dob.year<<endl;
    cout<<s3.name<<"\t"<<s3.ID<<"\t"<<s3.dob.day<<"\t"<<s3.dob.month<<"\t"<<s3.dob.year<<endl;

    for (int i=0; i<SIZE; i++) {
        cout<<students[i].name<<"\t"<<students[i].ID<<"\t"<<students[i].dob.day<<"\t"<<students[i].dob.month<<"\t"<<students[i].dob.year<<endl;
    }

}