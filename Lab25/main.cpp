#include <iostream>
using namespace std;

class user{ //an exception class
    public:
    user(){}
    user(string theName, int theAge):name(theName), age(theAge){}
    string getName()const{return name;}
    int getAge()const{return age;}
private:
    string name;
    int age;
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    string name;
    int age;
    cout<<"name\n";
    cin>>name;
    cout<<"age?\n";
    cin>>age;

    try{
        if(age<18)
            throw(user(name, age));
    }catch(user e){
        cout<<e.getAge()<<" less than 18"<<endl;
    }catch(...){ //default catch block
        cout<<"I just don't know what happened"<<endl;
    }

    try{
        if(age<18||name.size()<3)
            throw(user(name, age));
        if (age==18)
            throw age; //throws an integer
    }catch(user e){
        cout<<"either "<<e.getAge()<<" less than 18 or your name "<<e.getName()<<" has less than 3 characters"<<endl;
    }catch(...){ //do you have  catch block which is designated for an integer? NO!
        cout<<"I just don't know what happened"<<endl;
    }

    return 0;
}
