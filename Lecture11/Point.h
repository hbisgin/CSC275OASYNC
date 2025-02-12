//
// Created by bisgin on 2/12/2025.
//

#ifndef POINT_H //guards
#define POINT_H

namespace bisgin {
    class Point {
    public:
        Point():x(5), y(5){}
        Point(int _x, int _y):x(_x), y(_y){}
        void showPoints();
    private:
        int x,y;
    };
}

#endif //POINT_H
