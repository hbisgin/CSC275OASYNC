//
// Created by bisgin on 4/6/2025.
//

#include "HashTable.h"
#include "listtoolshb.cpp"

using namespace std;
HashTable::HashTable() {
  for (int i=0; i<SIZE; i++) {
    hashArray[i] = NULL;
  }
}

int HashTable::computeHash(string s) {
  int sum = 0;
  for (int i = 0; i < s.length(); i++) {
    sum += s[i];
  }
  return sum % SIZE;
}

void HashTable::put(string  s) {
  int index = computeHash(s);
  if (search(hashArray[index], s)==NULL) {
    headInsert(hashArray[index], s);
  }
}

void HashTable::displayHash() {
  for (int i = 0; i < SIZE; i++) {
    cout<<i<<":";
    display(hashArray[i]);
    cout<<endl;
  }
}

bool HashTable::containsString(string s) {
  int index = computeHash(s);
  Node<string> *ptr = search(hashArray[index], s);
  if (ptr==NULL) {
    return false;
  }else {
    return true;
  }
}



