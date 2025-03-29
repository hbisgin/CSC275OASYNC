#include <iostream>
#include "listtoolshb.h"
#include "listtoolshb.cpp"
#include <list> //class templates
#include <vector>
#include "Stack.h"
#include "Stack.cpp"
using namespace std;
int main() {
    Node<string> *head = new Node<string>("Adam", NULL);
    Stack<int> iStack;

    string name = "Eve"; //This is a string
    headInsert(head, name);
    name = "Chris";
    headInsert(head, name);
    display(head);

    vector<int> iVec; //dynamic array, similar to Array class
    for (int i = 0; i < 32; i++) {
        iVec.push_back(i);
        cout << iVec[i]<<" or "<< iVec.at(i) << " size "<<iVec.size() <<" capacity "<< iVec.capacity()<<endl;
    }

    vector<int>::iterator vIter;
    for (vIter = iVec.begin(); vIter != iVec.end(); vIter++) {
        cout << *vIter<<" ";
    }
    cout<<endl;
    list<int> iList;
    list<int>::iterator iter;
    for (int i = 0; i < 32; i++) {
        iList.push_back(i);
    }

    for (iter=iList.begin(); iter!=iList.end(); iter++) { //temp=temp->getLink()
        cout << *iter<<" ";
    }
    cout<<endl;
    if (iStack.isEmpty())
        cout<<"Empty"<<endl;

    for (int i=0; i<10; i++) {
        iStack.push(i);
    }

    iStack.display();

    for (int i=0; i<5; i++) {
        iStack.pop();
    }
    iStack.display();

    return 0;
}