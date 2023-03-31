#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class
/*class {{derived-class-name}} : {{visibility-mode}} {{base class name}}
{
    class member/methods/etc...
NOTE:-
1.default visibility mode is private
2.Public visibility mode:- Public members of the base class becomes public members of derived class
3.Private visibility mode:- Public members of the base class becomes private members of derived class
4.Privare members never inherited
} */

// Creating a programmer class derived from Employee base class
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
    languageCode = 9;
    }
    void getData(){
        cout<<id<<endl; 
    }
};

int main()
{
    Employee danny(1), king(2);
    cout << danny.salary << endl;
    cout << king.salary << endl;
    Programmer skillF(10);
    cout << skillF.languageCode<<endl;
    cout << skillF.id<<endl;
    skillF.getData();
    return 0;
}