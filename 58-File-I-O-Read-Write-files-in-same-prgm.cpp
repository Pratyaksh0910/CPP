#include<iostream>
#include<fstream>
using namespace std;

int main(){

    //***connecting our file from hout stream***
    // ofstream dout("Sample57.txt");

    //***creating a name variable entered by the user and filling it with the string entered by the user***
    // string name;
    // cout<<"Enter your name ";
    // cin>>name;

    //***Writing a string to the file***
    // dout<<"My name is " +name;

    // dout.close();

    ifstream din("sample57.txt");
    string content;
    din>>content;
    cout<<"The content of this file is: "<<content;
    din.close();
return 0;
}