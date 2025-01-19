#include<iostream>

using namespace std;


class Array{

public:
    Array(int size=2){a = new int[size]; this->capacity=size; length=0;} //default constructor. It has parameter but we have default value there.
    Array(const Array &aobj); //copy constructor
    int getCapacity()const {return capacity;}
    int getLength()const {return length;}
    int & operator[](int index){return a[index];} //[] operator, it's better to check index is valid.
    Array & operator=(const Array &aobj); //assignment operator
    void addElement(int element); //adding elements
private:
    int *a;//pointer for an array
    int capacity;//total capacity
    int length;//current size
    //put your doubleSize() function's prototype here. It  can be a private function since end user doesn't have to know about it.
    void doubleSize();
};




int main()
{

    Array arr(5), arrayb;
    arr[0]= 4;

    cout<<arr.getCapacity()<<endl;
    cout<<arr.getLength()<<endl;

    for(int i=0;i<5;i++)
        arr.addElement(i+1);

    for(int i=0; i<5; i++)
        cout<<arr[i]<<endl;

    //I'd like to uncomment this part

for(int i = 0; i<256; i++)
{
    arrayb.addElement(i);
    //if( i%4==0)
        cout<<arrayb.getLength()<<" "<<arrayb.getCapacity()<<endl;
}


}

Array::Array(const Array &aobj)
{
    capacity = aobj.capacity;
    length = aobj.length;
    a = new int [capacity];
    for(int i=0; i<length; i++)
        a[i] = aobj.a[i];

}

Array & Array::operator=(const Array &aobj)
{
    if(this == &aobj)
        return *this;
    delete [] a;
    capacity = aobj.capacity;
    length = aobj.length;

    a = new int [capacity];

    for(int i=0; i<length; i++)
        a[i] = aobj.a[i];

    return *this;

}

void Array::addElement(int element)
{
//call your doubleSize here along with a condition
    if(length==capacity)
    {
      doubleSize();
    }
    a[length] = element;
    length++;
}

void Array::doubleSize()
{
//design your doubleSize here
   int *temp  = new int [2*capacity];//a new pointer holdinga bigger space
   for(int i=0; i<capacity; i++)
   {
       temp[i] = a[i];
   }
   delete [] a;
   a = temp; //a and temp are bothing pointing the same memory space;
   capacity = 2*capacity;
}
