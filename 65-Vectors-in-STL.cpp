#include<iostream>
#include<vector>

using namespace std;

template <class T>
void display(vector <T> &v){
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
        // cout<<v.at(i)<< " ";
    }
    cout<<endl;
    
};
int main(){
    //Ways to create a vector
    vector<int> vec1; //Zero lenght vector
    vector<int> vec2(4); //4-element char vector
    // vec2.push_back('5');
    // display(vec2);
    vector<int> vec3(vec2); //4-element char vector from vec2
    // display(vec3);
    vector<int> vec4(6,3); //6-element vector of 3s
    display(vec4);
    cout<<vec4.size();

    int element , size = 5;
    // cout<<"Enter the size of your vector "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector ";
    //     cin>>element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();

    // display(vec1);
    // vector<int> :: iterator iter = vec1.begin();
    // vec1.insert(iter+1,500 , 566);
    // display(vec1);
    
return 0;
}