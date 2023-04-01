#include<iostream>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test {
    int a;
    int b;

    public:
    // Test(int i, int j) : a(i) , b(j)
    // Test(int i, int j) : a(i) , b(i+j)
    // Test(int i, int j) : a(i) , b(2*j)
    // Test(int i, int j) : a(i) , b(a+j)
    //Test(int i, int j) : b(j) , a(i+b)      //will throw an error because the data member “a” is being initialized first and the “b” is being initialized second so we have to assign the value to “a” data member first.
    Test(int i, int j): a(i)
    {
        b=j;
        cout<<"Constructor executed "<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main(){
    Test(4,6);
return 0;
}