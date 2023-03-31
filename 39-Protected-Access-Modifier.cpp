#include<iostream>
using namespace std;

class Base{
    protected:
        int a;
    private:
        int b;        
};

/*For a protected member
                        Private Derivation     Protected Derivation     Public Derivation
1. Private members      Not inheritated        Not inheritated          Not inheritated
2. Protected members    Protected              Private                  Protected
3. Public members       Public                 Private                  Protected
*/ 

class Derieved : protected Base{
    
};

int main(){
    Base b;
    Derieved d;
    //cout<<d.a;  Will not work since a is protected in both base and derieved class
return 0;
}