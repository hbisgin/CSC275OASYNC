#include <iostream>

using namespace std;

struct Srecord{
    double q1, q2;
    float midterm, final, average;
    char letter='A'; //I initialized with a value. This is called "constructor"
};
//Any grade of 90 or more is an A, any grade of 80 or more (but less than 90) is a B, any grade of 70 or more (but less
//than 80) is a C, any grade of 60 or more (but less than 70) is a D, and any grade below 60 is an F.
void fungrade(Srecord &student) //pass by reference
{
    cout<<"quiz1? "<<endl;
    cin>>student.q1;
    cout<<"quiz2? "<<endl;
    cin>>student.q2;
    cout<<"midterm? "<<endl;
    cin>>student.midterm;
    cout<<"final? "<<endl;
    cin>>student.final;
    student.average = 0.50*student.final + 0.25*student.midterm + 0.25*(student.q1*5 + student.q2*5);

    if (student.average>=90)
    {
        student.letter = 'A';
    }else if (student.average>=80 && student.average<90)
    {
        student.letter = 'B';
    }

}
int main() {
    Srecord student1, student2;
    Srecord student3 = {6, 7, 50, 90, 88, 'B'};
    Srecord students[3]; //this is a Srecord array with a size of 3
    students[0].midterm = 100;
    students[1].midterm = 80;
    students[2].midterm = 90;
    students[0].q1 = 10;
    students[1].q1 = 5;
    students[2].q1 = 9;
    for (int i=0; i<3; i++)
    {
        cout<<"student "<< i <<" "<<students[i].midterm<<endl;
    }

    fungrade(student1);
    cout<<student1.average<<endl;
    cout<<"your letter grde is "<<student1.letter<<endl;

    student2 = {6, 7, 80, 100};
    cout<<student2.midterm<<endl;
    cout<<student2.letter<<endl;
    cout<<student3.letter<<endl;

    return 0;
}
