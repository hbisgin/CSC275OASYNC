#include <iostream>

#include "Pet.h"
#include "Dog.h"
using namespace std;
int main() {
    Pet pet; //should not be doing this when Pet is an abstract class
    Dog dog;

    Pet *pptr = new Pet;
    Dog *dptr = new Dog;
    Pet *pptr2 = new Dog;
    delete pptr2;
    dptr->name = "Tiny";
    dptr->breed = "Great Dane";
    cout<<"with the help of pointer I'm barking... This is Tiny you bfff"<<endl;
    dptr->makeSound();

    pptr = dptr;
    cout<<"With the help of Pet pointer"<<endl;
    cout<<pptr->name<<endl;
    //cout<<pptr->breed<<endl;
    pptr->makeSound(); //with a detour I was able to get the breed info

    cout<<"Below is from base definition"<<endl;
    pet.makeSound(); //this is the definition in the parent class

    std::cout << "Hello, World!" << std::endl;
    dog.name = "Tiny";
    dog.breed = "Great Dane";
    cout<<dog.name<<endl;
    cout<<dog.breed<<endl;
    dog.makeSound(); //this is no surprise
    pet = dog; //I can assign a child (dervided) object to a parent (base) object.
    cout<<"after the assignment==========================="<<endl;
    cout<<pet.name<<endl;
    //cout<<pet.breed<<endl; // I can't do this like this :)
    return 0;
}