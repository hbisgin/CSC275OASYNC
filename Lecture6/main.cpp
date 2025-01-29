#include <iostream>

using namespace std;

class Point {
public:
    Point():x(0),y(0){counter++;} //inlined the constructor with an initialization list
    Point(int theX, int theY);
    void setX(int theX);
    void setY(int theY);
    int getX() const;
    int getY() const;
    static int getCount(){return counter;}
private:
    int x, y;
    static int counter; //data member
};

int Point::counter = 0; //this will really allocate the memmory, and Point class now on will keep track of this.


class Line {
public:
    Line();
    Line(Point p1, Point p2);
    void setStart(int theX, int theY);
    void setStart(Point theStart);
    void setEnd(int theX, int theY);
    void setEnd(Point theEnd);
    Point getStart(){return start;} //example for inlining
    Point getEnd(){return end;}
private:
    Point start, end;
};

inline void doubleNumber(int &x) { //non-member function
    x = 2*x;
}

int main() {
    Point p1, p2(2,3); //counter=2
    Line l1, l2(p1,p2); //l1 needs two points-->counter=4+1=5, l2 needs two more, therefore, counter = 5+2 = 7
    int number = 5;
    doubleNumber(number);
    cout<<number<<endl;

    std::cout << "Hello, World!" << std::endl;
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    cout<<p2.getX()<<" "<<p2.getY()<<endl;
    cout<<"******************"<<endl;
    cout<<l1.getStart().getX()<<" "<<l1.getEnd().getX()<<endl;
    cout<<l1.getStart().getY()<<" "<<l1.getEnd().getY()<<endl;
    cout<<"******************"<<endl;
    cout<<l2.getStart().getX()<<" "<<l2.getEnd().getX()<<endl;
    cout<<l2.getStart().getY()<<" "<<l2.getEnd().getY()<<endl;
    cout<<"******************"<<endl;
    cout<<p1.getCount()<<endl; //both point objects are telling me that there have been 7 points been created.
    cout<<p2.getCount()<<endl;
    cout<<Point::getCount()<<endl; //this method belongs to the class, not a particular object
    return 0;
}

//Point::Point():x(0),y(0){} //this was the first attempt

Point::Point(int theX, int theY):x(theX),y(theY){counter++;}
void Point::setX(int theX) {
    x = theX;
}
void Point::setY(int theY) {
    y = theY;
}
int Point::getX() const {return x;}
int Point::getY() const {return y;}

Line::Line() {
    start.setX(0); //this will set the x component of my start point to 0
    start.setY(0);
    end = Point(1,1); //counter++
}

//define explicit with two parameters.
Line::Line(Point p1, Point p2) {
    start.setX(p1.getX());
    start.setY(p1.getY()); //you're taking advantage of set functions
    end = p2; //here you simply assign your aparameter to your data member
}

/*
Point Line::getStart() {
    return start;
}

Point Line::getEnd() {
    return end;
}
*/

