#include <iostream>
#include "listtoolshb.h"
#include "listtoolshb.cpp"

#include "Queue.h"
#include "Queue.cpp"

#include <queue>
#include<deque>

using namespace std;
int main() {
    Queue<int>  iQueue;
    queue<int>  stlQueue;
    deque<int>  stlDeque;
    int value;
    iQueue.add(1);
    for (int i=2; i<=10; i++) {
        iQueue.add(i);
        stlQueue.push(i);
        stlDeque.push_back(i);
    }
    iQueue.display();

    for (int i=1; i<=5; i++) {
        cout<<iQueue.remove()<<" removed"<<endl;
        //cout<<value
    }

    cout<<"after removal my queue looks like the following:"<<endl;
    iQueue.display();

    cout<<"size: "<<stlQueue.size()<<endl;
    for (int i=2; i<=10; i++) {
        cout<<stlQueue.front()<<" front"<<endl;
        stlQueue.pop();
        cout<<"size: "<<stlQueue.size()<<endl;
    }

   cout<<"dequeue operations and curernt size is "<<stlDeque.size()<<endl;
    for (int i=1; i<=3; i++) {
        cout<<stlDeque.front()<<" front "<<stlDeque.back()<<" back"<<endl;
        stlDeque.pop_front();
        stlDeque.pop_back();
    }
    cout<<"current size is "<<stlDeque.size()<<endl;
    return 0;
}