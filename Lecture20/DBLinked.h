//
// Created by bisgin on 3/27/2025.
//

#ifndef DBLINKED_H
#define DBLINKED_H
class DBLinked {
public:
    DBLinked(){}
    DBLinked(int theData, DBLinked* thePrevious, DBLinked* theNext):data(theData), nextLink(theNext), prevLink(thePrevious){}
    void setData(int theData) {data = theData;}
    int getData() {return data;}
    void setNext(DBLinked* theNext) {nextLink = theNext;}
    DBLinked* getNext() {return nextLink;}
    void setPrevious(DBLinked* thePrev){prevLink=thePrev;}
    DBLinked* getPrevious() {return prevLink;}
private:
    int data;
    DBLinked* nextLink;
    DBLinked* prevLink;
};
typedef DBLinked* DBLinkedPtr;

void insertHeadDB(DBLinkedPtr &theHead, int theData) {
    DBLinkedPtr newHead = new DBLinked(theData, NULL, theHead);
    theHead->setPrevious(newHead);
    theHead = newHead;
}

void displayDB(DBLinkedPtr theHead) {
    DBLinkedPtr temp = theHead;
    while (temp != NULL) {
        std::cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    std::cout<<std::endl;
}

DBLinkedPtr search(DBLinkedPtr head, int Data) {
    DBLinkedPtr temp = head;
    if (temp==NULL) {
        return NULL;
    }else {
        while(temp->getData()!=Data &&  temp->getNext()!=NULL) {
            temp = temp->getNext();
        }

        if (temp->getData()==Data) {
            return temp;
        }else {
            return NULL;
        }

    }
    return temp;
}

void removeDB(DBLinkedPtr discard) { //I'm removing a node in the middle which I know exists for sure.

    //Please consider adding a code to handle the first and the last node.

    DBLinkedPtr prev = discard->getPrevious();
    DBLinkedPtr next = discard->getNext();
    prev->setNext(next);
    next->setPrevious(prev);
    delete discard;
}
#endif //DBLINKED_H
