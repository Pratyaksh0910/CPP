#include<iostream>
using namespace std;

int main (){
    for (int i = 0; i < 40; i++)
    {
        cout<<i<<endl;
        if (i==2)
        {
        break; //break statement is used for breaking the code or loop here itself      
          }
       //we can also use continue cmd at place of break as it skips that codes and continue the process 
    }
    return 0;
}
