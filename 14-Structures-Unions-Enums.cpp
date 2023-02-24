#include<iostream>
using namespace std;


typedef struct employee //(Typedef is used as shortcut.For eg-struct employee will becomes ep)
{
    /* data */
    int eID;
    char favChar;
    float salary;
}ep;


union money
{
    /* data */
    int rice;
    char car;
    float pound;
};


int main(){

// struct employee danny;
// ep dannny;
// danny.eID=1;
// danny.favChar='c';
// danny.salary=12000000;
// cout<<"The value is "<<danny.eID<<endl;
// cout<<"The value is "<<danny.favChar<<endl;
// cout<<"The value is "<<danny.salary<<endl;

// union money m1;
// m1.rice=34;
// m1.car='c';
// cout<<m1.rice<<endl;
// cout<<m1.car<<endl;

enum Meal {breakfast,lunch,dinner};
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;

return 0;
}