#include <iostream>

using namespace std;

template<class T>
void swapValues(T &var1, T &var2) {
    T temp = var1;
    var1 = var2;
    var2 = temp;
}

template<class T>
int indexofSmallest(const T a[], int size) {
    T smallest = a[0];
    int indexofsmallest = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] < smallest) {
            smallest = a[i];
            indexofsmallest = i;
        }
    }

    return indexofsmallest;
}

template<class T>
bool found(T a[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (a[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int a = 10, b = 20;
    int iarray[] = {3, 5, 6,-2,4};
    char carray[] = {'b','a','c','d','e','f'};
    cout<<"smalles index of integers "<<indexofSmallest(iarray, 5) << endl;
    cout<<"smalles index of characters "<<indexofSmallest(carray, 6) << endl;

    cout<<found(iarray, 5, -2) << endl;
    cout<<found(carray, 5, 'g') << endl;

    string name1= "Adam", name2 = "John";
    cout<<"Before swapping: "<<a<<"\t"<<b<<endl;
    cout<<"Before swapping: "<<name1<<"\t"<<name2<<endl;
    swapValues(a, b);
    swapValues(name1, name2);
    cout<<"After swapping: "<<a<<"\t"<<b<<endl;
    cout<<"After swapping: "<<name1<<"\t"<<name2<<endl;
}