//
// Created by bisgin on 2/18/2025.
//

#ifndef ARRAYBACKUP_H
#define ARRAYBACKUP_H
#include "Array.h" //don't forget to include the header of the parent class


class ArrayBackUp: public Array{
public:
    ArrayBackUp();
    ArrayBackUp(int _size);
    ~ArrayBackUp();
    ArrayBackUp(const ArrayBackUp& other);
    ArrayBackUp& operator=(const ArrayBackUp& other);
    void backUp();
private:
    int *b;
    int usedB;
};



#endif //ARRAYBACKUP_H
