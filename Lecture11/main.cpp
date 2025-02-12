#include <iostream>
#include "Point.h"
#include "Dummy.h"
using namespace std;
//using bisgin::Dummy;
//using namespace bisgin;

namespace test {
    void sayHi();
}

namespace { //more of a local namespace to hid something.
    void greetings() {
        cout<<"Hello world! from unnamed namespace"<<endl;
    }

}

//using namespace test;
int main() {
    bisgin::Point p1(2,3), p2;
    bisgin::Dummy dummy; //even though I'm able to include the .h file (header) which is well defined, I have this error
    dummy.greetings();
    p1.showPoints();
    test::sayHi();
    greetings();
    return 0;
}

namespace test {
    void sayHi() {
        cout<<"Hi from the main program"<<endl;
    }
}