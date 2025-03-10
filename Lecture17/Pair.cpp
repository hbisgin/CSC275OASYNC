//
// Created by bisgin on 3/9/2025.
//

#include "Pair.h"

#include <iostream>

using namespace std;
template<class T>
Pair<T>::Pair(T _first, T _second):first(_first), second(_second) {}

template<class T>
void Pair<T>::setFirst(T _first) {
    first = _first;
}
template<class T>
void Pair<T>::setSecond(T _second) {
    second = _second;
}
template<class T>
T Pair<T>::getFirst() {
    return first;
}

template<class T>
T Pair<T>::getSecond() {
    return second;
}

template<class T>
void Pair<T>::showPair() {
    cout<<first<<" "<<second<<endl;
}



