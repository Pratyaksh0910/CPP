#include<iostream>
using namespace std;


//inline        //Inline reduces the time for the code the directly puts the function there only
inline int product (int a, int b){
    //static int c=0;              [//This executes only once]
    //c=c+1;                       [//next time this function is run,the value of c retained]
    return a*b;
}

float moneyReceived(int currentMoney, float factor=1.04){
    return currentMoney*factor;
}

int main(){
// int a,b;
// cout<<"Enter the value of a and b "<<endl;
// cin>>a>>b;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
// cout<<"The product of a and b is "<<product(a,b)<<endl;
int money=100000;
cout<<"If you have "<<money<<"RS in your bank account,you will receive "<<moneyReceived(money)<<"RS after 1 year"<<endl;
cout<<"FOR VIP: If you have "<<money<<"RS in your bank account,you will receive "<<moneyReceived(money,1.1)<<"RS after 1 year"<<endl;
return 0;
}