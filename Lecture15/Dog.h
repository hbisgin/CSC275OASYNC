//
// Created by bisgin on 3/3/2025.
//

#ifndef DOG_H
#define DOG_H

#include "Pet.h"

class Dog: public Pet {
public:
    string breed;
    void makeSound() override;
};



#endif //DOG_H
