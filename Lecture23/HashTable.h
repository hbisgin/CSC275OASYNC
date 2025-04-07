//
// Created by bisgin on 4/6/2025.
//

#ifndef HASHTABLE_H
#define HASHTABLE_H
using namespace std;
#include <string>

#include "listtoolshb.h"
const int SIZE = 10;
class HashTable {
public:
    HashTable();
    void put(string s);
    void displayHash();
    bool containsString(string s);
private:
    Node<string>* hashArray[10];
    static int computeHash(string s);

};



#endif //HASHTABLE_H
