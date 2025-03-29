#include <iostream>
#include "DBLinked.h"
using namespace std;


int main() {
    DBLinkedPtr head = new DBLinked(1, NULL, NULL);
    cout<<head->getData()<<endl;
    insertHeadDB(head, 2);
    for (int i=3; i<10; i++) {
        insertHeadDB(head, i);
    }
    displayDB(head);

    DBLinkedPtr temp = search(head, 7);
    cout<<"search returned: "<<temp->getData()<<endl;

    removeDB(temp);
    displayDB(head);

    return 0;
}