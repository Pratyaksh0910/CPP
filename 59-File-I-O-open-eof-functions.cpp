#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("sample57.txt");
    out<<"This is me \n";
    out<<"This is me also";
    out.close();

    ifstream in;
    string st , st2;
    in.open("sample57.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof() ==0){
        getline(in ,st);
        cout<<st<<endl;
    }
    in.close();

return 0;
}