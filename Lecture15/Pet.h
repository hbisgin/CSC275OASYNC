//
// Created by bisgin on 3/3/2025.
//

#ifndef PET_H
#define PET_H
#include<iostream>

using namespace std;

class Pet {
public:
    string name;
    virtual void makeSound(); //without a definition
    virtual ~Pet(){}
};



#endif //PET_H
