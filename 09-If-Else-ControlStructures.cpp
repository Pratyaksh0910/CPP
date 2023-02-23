#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    
    // Selection control structure - if else or if else ladder   
    
    // if(age<18){
    //     cout<<"Yor are not allowed"<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid"<<endl;
    // }
    // else{
    //     cout<<"You are allowed"<<endl;
    // }

    // Selection control structure - Switch case statements
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
        break; //[Break statement is used as end the program here itself]

    case 22:
    cout<<"You are 22"<<endl;
        break;

    case 2:
    cout<<"You are 2"<<endl;
        break;

    case 50:
    cout<<"You are 50"<<endl;
        break;
    
    default:
    cout<<"No special cases"<<endl;
        break;
    }
    return 0;
}