#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
    void setValue(int Value ){
    data= Value ;
    }
    friend void add (X,Y);
};

class Y{
    int num;
    public:
    void setValue(int Value ){
    num= Value ;
    }
    friend void add (X,Y);
};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y  gives me "<<o1.data+o2.num;
}

int main(){
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(5);

    add (a1,b1);
return 0;
}