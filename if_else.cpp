#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age > 150 || age < 1)
    {
        cout<<"Inavalid age";
    }
    else if(age>=18)
    {
        cout<<"You can vote";
    }
    else
    {
        cout<<"You cannot vote";
    }
}