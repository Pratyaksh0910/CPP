#include<iostream>
using namespace std;

template <class T>
class Danny{
    public:
        T data;
        Danny(T a){
            data = a;
        }
    void display();    
};

template <class T>
void Danny<T>:: display(){
    cout<<data;
}

void func(int a){
    cout<<"I am first func()"<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func()"<<a<<endl;
}

int main(){
// Danny<float> d(5.7);
// Danny<char> d('c');
// cout<<d.data<<endl;
// d.display();

func(4);
func1(4);
return 0;
}