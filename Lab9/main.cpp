#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

#define N 5

class Profile{
public:
    Profile(){}
    Profile(int sage){age=sage;}
    void setAge(int pp){age=pp;}
    int getAge()const {return age;}
    void setName(string nn){name=nn;}
    string getName(){return name;}
    //define your operator > here
    bool operator >(Profile const &p2);
    int & operator[](int index);
    void displayArray(){cout<<name<<endl;};
    friend ostream & operator<<(ostream &var, Profile p);

private:
    string name;
    int id, age;
    int a[N];


};

bool Profile::operator>(const Profile &p2) {
    return age>p2.getAge();
}
int main()
{
    Profile p1, p2;
    p1.setName("Halil");
    p1.setAge(40);
    p2.setAge(30);

    if (p1>p2)
        cout<<p1.getName()<<" is older"<<endl;
    else
        cout<<p2.getName()<<" is older"<<endl;
//    uncomment below when you are done with the ostream function
//    cout<<"Array members for"<<p1<<" are: "<<endl;

    for(int i=0;i<N;i++)
        p1[i]=1 + rand()%6;
//    if(p1>p2) //uncomment this part when your operator is ready
    p1.displayArray();
}

//define your member operator > here

int & Profile::operator[](int index)
{
    return a[index];

}


ostream & operator<<(ostream &var, Profile p)
{
  var<<p.name<<" ";
  var<<p.age;
    return var;

}

//define your member display function here
