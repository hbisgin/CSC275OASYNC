#include<iostream>
#include<string>
using namespace std;
class Profile{
public:
    //Profile(){}//default
    Profile():name("Jane"), lastname("Doe"), age(18){}
    Profile(string iname, string ilastname, int iage):name(iname), lastname(ilastname), age(iage){}
    string getName(){return name;}
    string getLastName(){return lastname;}
    int getAge(){return age;}
    void setName(string pname);
    void setLastName(string plastname);
    void setAge(int page);
private:
    string name, lastname;
    int age;
};
class Twitter{
public:
    Twitter(Profile person){TwProfile = person; NumFollowers=0;}
    Profile getProfile( ){return TwProfile;}
    int getNumFollowers(){return NumFollowers;}
    void addFollower(){NumFollowers++;}
    void ChangeProfile(string pname="Jane", string plastname="Doe", int
    page=18);
private:
    Profile TwProfile;
    int NumFollowers;
};
int main(){
    Profile persona1;
    Twitter Account1(persona1);
    for( int i=0; i<10; i++)
        Account1.addFollower();
    cout<<Account1.getNumFollowers()<<endl;
    cout<<Account1.getProfile().getName()<<endl;
    cout<<Account1.getProfile().getLastName()<<endl;
    cout<<Account1.getProfile().getAge()<<endl;
    Account1.ChangeProfile("Halil");
    cout<<Account1.getNumFollowers()<<endl;
    cout<<Account1.getProfile().getName()<<endl;
    cout<<Account1.getProfile().getLastName()<<endl;
    cout<<Account1.getProfile().getAge()<<endl;
}
void Twitter::ChangeProfile(string pname, string plastname, int page)
{

    TwProfile.setName(pname);
    TwProfile.setLastName(plastname);
    TwProfile.setAge(page);

}
void Profile::setName(string pname)
{
    name = pname;
}
void Profile::setLastName(string plastname)
{
    lastname = plastname;
}
void Profile::setAge(int page)
{
    age = page;
}
