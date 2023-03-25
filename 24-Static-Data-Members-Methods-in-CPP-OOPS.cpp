#include<iostream>
using namespace std;

class Employee{
     int id;
     static int count;
    public:
    void setData(void){
        cout<<"Enter the ID"<<endl;
        cin>>id;
        count++;
    } 
    void getData(void){
        cout<<"The id of this employee is "<<id<<" and this is employee number is "<<count<<endl;
    }

    static void getCount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

//Count is the static data member of class Employee
int Employee :: count; //default value is zero

int main(){
Employee danny,king,goo;

// danny.id=1;
// danny.count=1;   [cannot do this as id and count is private]

danny.setData();
danny.getData();
Employee::getCount();

king.setData();
king.getData();
Employee::getCount();

goo.setData();
goo.getData();
Employee::getCount();

return 0;
}