#include<iostream>
#include<iomanip> //(Kind of header file like iostream)
using namespace std;

int main() {
    //***[int or char value can be changed]***

    // int a=34;
    // cout<<"The value of a was "<<endl<<a<<endl;
    // a=45;
    // cout<<"The value of a is "<<endl<<a;

    //***Constants in C++ [const value cannot be change]***
    // const int a=3;
  
                     //Manipulstors in C++ 

//     int a=3,b=78,c=1233;

//     cout<<"The value of a is "<<a<<endl;
//     cout<<"The value of b is "<<b<<endl;
//     cout<<"The value of c is "<<c<<endl;
    
    
// //***setw()***
// //[is a manipulator and it encloses field width value or basically it gives spaces to int or variables output]


//     cout<<"The value of a is "<<setw(4)<<a<<endl;
//     cout<<"The value of b is "<<setw(4)<<b<<endl;
//     cout<<"The value of c is "<<setw(4)<<c<<endl;
    
    // //Operator Precedence
    // [Which operator resolves first like we solve BODMAS]

    int a=3, b=4;
    int c= (a*b)+5;
    int d= ((((a*5)+b)-47)+87);
    cout<<c<<endl;
    cout<<d<<endl;
    return 0;
}