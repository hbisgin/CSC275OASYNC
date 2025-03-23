#include <iostream>
using namespace std;

class IntNode {
public:
    IntNode(){}
    IntNode(int data, IntNode* link):data(data), link(link){}
    int getData()const {return data;}
    IntNode* getLink()const {return link;}
    void setData(int _data){data = _data;}
    void setLink(IntNode* _link){link = _link;}
private:
    int data;
    IntNode * link;
};
typedef IntNode* IntNodePtr;

void headInsert( IntNode* & head, int data ) {
    head = new IntNode(data, head);
}

void insert(IntNodePtr afterMe, int Data) {
    IntNodePtr temp = afterMe->getLink();
    afterMe->setLink(new IntNode(Data, temp)); //return the address of newly created node
}

IntNodePtr search(IntNodePtr head, int Data) {
    IntNodePtr temp = head;
    if (temp==NULL) {
        return NULL;
    }else {
        while(temp->getData()!=Data &&  temp->getLink()!=NULL) {
            temp = temp->getLink();
        }

        if (temp->getData()==Data) {
            return temp;
        }else {
            return NULL;
        }

    }
    return temp;
}

void removeNode(IntNodePtr head, int target) {
    IntNodePtr before = head;

    while (before->getLink()->getData()!=target) {
        before = before->getLink();
    }

    IntNodePtr discard = before->getLink();
    //I have to connect the node on which before is sitting to the node on which discard is sitting
    before->setLink(discard->getLink()); //before->setLink(before->getLink()->getLink())
    delete discard;

}
int main() {
    IntNodePtr head, afterMe;
    head = new IntNode; //using the default constructor
    head->setData(1);
    head->setLink(NULL);
    head = new IntNode(2, head);
    head = new IntNode(3, head);
    headInsert(head, 4);
    for (int i=5; i<10; i++) {
        headInsert(head, i);
    }

    IntNodePtr temp = head;
    while (temp != NULL) {
        cout<<temp->getData()<<" ";
        temp = temp->getLink();
    }
    cout<<"\n Trying the search with number 7"<<endl;
    afterMe = search(head, 10);
    if (afterMe != NULL) {
        cout<<afterMe->getData()<<" ";
        insert(afterMe, 0);
    }else {
        cout<<"\n No such element in the list";
    }


    cout<<"After insertion attempt"<<endl;
    temp = head;
    while (temp != NULL) {
        cout<<temp->getData()<<" ";
        temp = temp->getLink();
    }

    removeNode(head, 6);
    cout<<"\n After removal attempt of 6"<<endl;

    temp = head;
    while (temp != NULL) {
        cout<<temp->getData()<<" ";
        temp = temp->getLink();
    }

    return 0;
}