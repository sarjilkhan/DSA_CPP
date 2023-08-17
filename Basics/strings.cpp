#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name="sarjil";
    cout<<"The name is "<<name<<endl;
    cout<<"The length of name is "<<name.length()<<endl;
    cout<<"The name is "<<name.substr(1,3)<<endl;
    cout<<"The name is "<<name.substr(2,2);
}