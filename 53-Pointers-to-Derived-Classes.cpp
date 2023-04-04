#include<iostream>
using namespace std;

class BaseClass{
    public:
        int var_base;
        void display(){
            cout<<"Display Base class variable var_base "<<var_base<<endl;
        }

};

class DerievedClass : public BaseClass{
    public:
        int var_derieved;
        void display(){
            cout<<"Display Base class variable var_base "<<var_base<<endl;
            cout<<"Display Derieved  class variable var_derieved "<<var_derieved<<endl;
        }
};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerievedClass obj_derieved;
    base_class_pointer = &obj_derieved;

    base_class_pointer->var_base=34;
    base_class_pointer->display();

    DerievedClass * derieved_class_pointer;
    derieved_class_pointer = &obj_derieved;
    derieved_class_pointer->var_derieved=98;
    derieved_class_pointer->display();

return 0;
}