#include <iostream>

using namespace std;

class Line;//forward declaration

class Point {
public:
    Point(){pair[0]=0; pair[1]=0;}
    Point(int x,int y){pair[0]=x;pair[1]=y;}
    int getX(){return pair[0];}
    int getY(){return pair[1];}
    friend const Point operator-(const Point &p);
    friend class Line;
    int&  operator[](int i){return pair[i];}
    friend ostream& operator<<(ostream& os, const Point &p);
private:
    int pair[2];//pairs[0] for x, pair[1] for y

};

class Line {
public:
    Line(){}
    Line(Point _p1, Point _p2):p1(_p1), p2(_p2){}
    void showPoint();
private:
    Point p1, p2;
};

const Point operator-(const Point &p) {
    return Point(-p.pair[0], -p.pair[1]); //normally you would need some getters because these are private
}

double& my_fun(double &var) {
    return var;
}

double fun2(double var) {
    return var;
}


ostream& operator<<(ostream& os, const Point &p) {
    os << p.pair[0] << " " << p.pair[1];//append everything into os which is ostream object
    return os;
}
int main() {
    Point p1(5,3), p2;
    p2 = p1;
    p1[0] = 100; //I want to be able to do this to change the x component
    p1[1] = 200;
    p2[0] = -5;
    int robert = 100;
    int &bob = robert;
    double num = 4000.00;
    bob = 200; //assignng a value

    cout<<bob<<" "<<robert<<endl;//in these both cases, you're retrieving through bob
    cout<<bob+100<<endl;
    my_fun(num)=8000;
    ///fun2(num) = 10000; //this is not legal.
    cout<<"current value for num "<<num<<endl;


    Line l1(p1, -p1); //unary - to create -p1
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    p1 = -p1;
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    l1.showPoint();
    cout<<"Point components: "<<p1<<endl;
    cout<<"Point components: "<<p2<<endl;
    //cout<<p1<<endl;

}

void Line::showPoint() {
    //cout<<p1.getX()<<" "<<p1.getY()<<endl;
    //cout<<p2.getX()<<" "<<p2.getY()<<endl;
    cout<<p1.pair[0]<<" "<<p1.pair[1]<<endl; //not through a getter
    cout<<p2.pair[0]<<" "<<p2.pair[1]<<endl; //direct access
}




