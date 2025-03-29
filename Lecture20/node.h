//
// Created by bisgin on 3/27/2025.
//

#ifndef NODE_H
#define NODE_H
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

#endif //NODE_H