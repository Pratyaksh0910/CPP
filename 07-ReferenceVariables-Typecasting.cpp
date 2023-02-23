#include<iostream>
using namespace std;

int c=45;  //(global variable)

int main() {

    //***BUILD IN DATATYPES***//
    
    // int a,b,c;
    // cout<<"Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b: "<<endl;
    // cin>>b;
    // c= a+b;
    // cout<<"The sum is: \n"<<c<<endl;
    // cout<<"The value of global operator is: \n"<<::c;  
     

    //***{(scope resolution operator[::] for global operator)}***
    

    //***FLOAT,LONG & LONG DOUBLES LITERALS***//

    // float d=34.4;
    // long double e=34.4;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
    // cout<<"The value of d is "<<endl<<d<<endl<<"The value of e is "<<endl<<e;
    
    //***REFERENCE VARIABLES***[All are same but with diff names]

    // float x=455;
    // float & y=x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //***TYPECASTING***[To convert one datatype to another datatype]
    int a=45;
    float b=45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int (b);

    cout<<"The expression is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    
    return 0;
}