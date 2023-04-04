#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base=1;
        virtual void display(){
            cout<<"1 Display Base class variable var_base "<<var_base<<endl;
        }

};

class DerievedClass : public BaseClass{
    public:
        int var_derieved=2;
        void display(){
            cout<<"2 Display Base class variable var_base "<<var_base<<endl;
            cout<<"2 Display Derieved  class variable var_derieved "<<var_derieved<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerievedClass obj_derieved;

    base_class_pointer = &obj_derieved;
    base_class_pointer->display();
return 0;
}