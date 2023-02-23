#include<iostream>;
using namespace std;

int main() {;
/*What is pointers?
data types which holds the address of other data types*/

int a=3;
int* b=&a; 

//(&)it is used as (addresss of) operator.
cout<<"The address of a is "<<b<<endl;
cout<<"The address of a is "<<&a<<endl;

//(*)it is used as dereference (value of) of operator.
cout<<"The value of address a is "<<*b<<endl;

//Pointer to pointer
int** c=&b;

cout<<"The address of b is "<<&b<<endl;
cout<<"The address of b is "<<c<<endl;
cout<<"The value of address a is "<<*c<<endl;
cout<<"The value of address [value at(value at(c))] is "<<**c<<endl; 

    return 0;
}