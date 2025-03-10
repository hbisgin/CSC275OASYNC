//
// Created by bisgin on 3/9/2025.
//

#ifndef PAIR_H
#define PAIR_H


template<class T>
class Pair {
public:
    Pair();
    Pair(T, T);
    void setFirst(T);
    void setSecond(T);
    T getFirst();
    T getSecond();
    void showPair();
 private:
    T first;
    T second;
};

//#include "Pair.cpp" //works for some environments

#endif //PAIR_H
