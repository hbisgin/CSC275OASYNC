#include <iostream>
#include<set>
#include<map>
#include "HashTable.h"
using namespace std;

int main() {
    HashTable hashTable;
    set<string> users;
    map<string, int> students;
    students["Adam"] = 90;
    students["Bob"] = 80;
    students["Mary"] = 70;
    students["Sue"] = 100;
    hashTable.put("Chris");
    hashTable.put("John");
    hashTable.put("Adam");
    hashTable.put("Mary");
    hashTable.displayHash();
    if (hashTable.containsString("Mary"))
        cout << "Marry is here" << endl;
    else
        cout << "Marry is not here" << endl;

    std::cout << "Hello, World!" << std::endl;
   // cout << computeHash("Mary") << endl;

    users.insert("Mary");
    users.insert("Chris");
    users.insert("Sue");
    cout<<"Below are the set users"<<endl;
    set<string>::iterator iter;
    pair<set<string>::iterator, bool> ret;
    for (iter = users.begin(); iter != users.end(); iter++) {
        cout << *iter << endl;
    }
    ret = users.insert("Chris");
    cout << *ret.first<<" "<<ret.second << endl;
    ret = users.insert("John");
    cout << *ret.first<<" "<<ret.second << endl;

    map<string, int>::iterator mIter;
    for (mIter = students.begin(); mIter != students.end(); mIter++ ) {
       cout<<mIter->first<<" "<<mIter->second<<endl;
    }

    cout<<students["Sue"]<<endl;
    return 0;
}