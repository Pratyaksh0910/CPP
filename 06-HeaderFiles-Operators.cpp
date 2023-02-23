/* There are two types of header files:

1.System Header Files:It comes with the compiler 
#include<iostream>

2.User Define Header Files:It is written by proggramer 
#include'this.h'(This [this.h] will give error,
if this.h is not present as a file or in current directory) 

(All header files refernce on this website,
[https://en.cppreference.com/w/cpp/header]) */

#include<iostream>
using namespace std;

int main() {
int a=4, b=5;
/*"Operators in C++";
Following are the operators in C++*/

//Arithmatic Operators
cout<<"The value of a+b is: "<<a+b<<endl; 
cout<<"The value of a-b is: "<<a-b<<endl;
cout<<"The value of a*b is: "<<a*b<<endl;
cout<<"The value of a/b is: "<<a/b<<endl;
cout<<"The value of a%b is: "<<a%b<<endl;
cout<<"The value of a++ is: "<<a++<<endl;
cout<<"The value of a-- is: "<<a--<<endl;
cout<<"The value of ++a is: "<<++a<<endl;
cout<<"The value of --a is: "<<--a<<endl; 

/*Assignment Operators (Used to assign values to variables)
int a=3,b=9;
char d='d'; */

//Comparison Operator
cout<<"The value of a==b is: "<<(a==b)<<endl;
cout<<"The value of a!=b is: "<<(a!=b)<<endl;
cout<<"The value of a>=b is: "<<(a>=b)<<endl;
cout<<"The value of a<=b is: "<<(a<=b)<<endl;
cout<<"The value of a>b is: "<<(a>b)<<endl;
cout<<"The value of a<b is: "<<(a<b)<<endl;
    
//Logical Operator
cout<<"The value of logical (and[&&]) operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
cout<<"The value of logical (or[||]) operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
cout<<"The value of logical (not[!]) operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}