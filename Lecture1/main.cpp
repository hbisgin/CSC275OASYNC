// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.

#include <iostream>
using namespace std;

struct Fruit {
    string name; //char name[10];
    float weight;
    float price;
};

int main() {
    Fruit fruit1, fruit2, fruit3;
    Fruit *fp; //this is a pointer for any Fruit type. Initially this is a null pointer
    fp = &fruit1; //the address of the fruit1 object has been assgined to fp
    cout<<"Hello, welcome to my grocery"<<endl;
    fruit1.name="banana"; //assigning value
    fruit1.weight=1.5;
    fruit1.price=0.60;
    cout<<fruit1.name<<"\t"<<fruit1.weight<<"\t"<<fruit1.price<<" cost "<< fruit1.weight*fruit1.price<<endl;
    //deferencing *fp
    cout<<"address I'm holding is: "<<fp<<endl;
    //cout<<"address I'm holding is: "<<*fp<<endl; //need an overloaded operator operato to be able to print the whole struct type
    //retrieving values
    (*fp).weight = 2; //I deferenced the object. Then i accessed its component through dot operator.
    cout<<fruit1.name<<"\t"<<fruit1.weight<<"\t"<<fruit1.price<<" cost "<< fruit1.weight*fruit1.price<<endl;
    fp->weight = 3; //using arrow operator to access data members in the case of a pointer.
    cout<<fruit1.name<<"\t"<<fruit1.weight<<"\t"<<fruit1.price<<" cost "<< fruit1.weight*fruit1.price<<endl;

}