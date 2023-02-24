#include<iostream>
using namespace std;

//Functions Prototype
// type function-name (arguments)

int sum (int a, int b);

int main(){

int num1, num2;
cout<<"Enter First number"<<endl;
cin>>num1;
cout<<"Enter Second number"<<endl;
cin>>num2;
cout<<"The sum is"<<endl<<sum(num1,num2);
// Num1 & Num2 are actual parameters
return 0;
}

int sum (int a, int b)
{
    int c =a+b;
    //a & b are formal parameters as they are taking value from num1 & num2
    return c;
}
