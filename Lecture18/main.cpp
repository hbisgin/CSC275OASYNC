#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next; //this is a pointer which is able to hold the addres of a Node object.
};

typedef Node* NodePtr;

int main() {
    NodePtr start = NULL; //start is a NULL pointer
    start = new Node; //in the memort it finds a space and creates a Node object
    start->data = 1;
    cout<<start->data<<endl; //*(start).data currenlt I have only one node
    NodePtr temp = new Node; //this is the second node, temp knows the address of this newly created node!
    temp->data = 2;
    temp->next = NULL; //Have I build the link yet? ---NO!!!

    start->next = temp; //temp is holding an address,
                        //and I can assign it to the next pointer of the first Node
    //start is pointing first box/Node
    //start->next is pointing the second Node
    NodePtr ptr2 = start->next; //ptr2 is pointing the second Node.
    //How can I access to the next pointer of the second node?
    ptr2->next = new Node; //the address of the newly created third node is being held by next
    ptr2->next->data = 3;
    ptr2->next->next = NULL; //the last node now has the null pointer
    cout<<"below are the data members in the nodes"<<endl;
    cout<<start->data<<endl; //print data in the first node
    cout<<start->next->data<<endl; //print data in the second node
    cout<<start->next->next->data<<endl; //print data in the third node

    cout<<"below are the data members in the nodes through a while loop"<<endl;
    temp = start; //I introduce a temporary/dummy variable (pointer) which starts with start pointer
    while(temp != NULL) {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    return 0;
}