#include <iostream>

using namespace std;

class Point{
public:
    Point():x(0), y(0){} //default constructor
    Point(float xx):x(xx), y(0){}//cosntructor with one parameter
    Point(float xx, float y);
    void display();
private:
    float  x, y;
    void checkEntry(float xx, float yy);
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    Point point1, point2(5), point3(5,10), point4(-1,0);
    point1.display();
    point2.display();
    point3.display();
    return 0;
}

Point::Point(float xx, float yy)
{
    x = xx;
    y = yy;
    checkEntry(x,y);
}

void Point::checkEntry(float xx, float yy)
{
    if(xx<0 || yy<0){
        cout<<"can't accept negative"<<endl;
        exit(1);
    }
}

void Point::display() {
    cout<<x<<" "<<y<<endl;
}