#include<iostream>
#include<fstream>
/*
The useful classes for working with files in C++ are:
1.fstreambase
2.ifstream-->derieved from fstreambase
3.ofstream-->derieved from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
1.Using the constructor
2.Using the member function open() of the class
*/
using namespace std;

int main(){
    string st = "Danny";
    string st2;
    // ***Opening a file using contructor and writing it ***
    // ofstream out("sample57.txt");//Write operation
    // out<<st;

    //***Opening a file using contructor and reading it ***
    ifstream in("sample57b.txt");//Write operation
    //in>>st2;
    getline(in,st2);
    cout<<st2;
return 0;
}