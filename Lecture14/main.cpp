#include <iostream>

using namespace std;

class Student {
public:
    Student():name("John Doe") {}
    Student(string name) {}
    virtual void showInfo(){cout<<"Student"<<name<<endl;}
protected:
    string name;
};

class UnderGrad:public Student {
public:
    UnderGrad():Student(), major("CS"){}
    UnderGrad(string _name, string _major):Student(_name), major(_major) {}
    void showInfo() override {cout<<"Undergrad name is "<<name<<endl; cout<<"major is "<<major<<endl;}
private:
    string major;
};

void askInfo(Student &st)  {
    st.showInfo();
}

int main() {
    Student student;
    UnderGrad ugstudent;
    student.showInfo(); //early/static binding
    ugstudent.showInfo(); //static/early binding
    //after this point I wait for the actual function call to decide which showInfo to call
    askInfo(student); //you would expect this to run
    askInfo(ugstudent); //askInfo was designed for the parent class, Student, but it's expected to work on the child, UG class
    return 0;
}