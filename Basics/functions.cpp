#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int a,b;
    cout<<"Enter the first no "<<endl;
    cin>>a;
    cout<<"Enter the second no "<<endl;
    cin>>b;
    cout<<"The sum of two nos is "<<sum(a,b);

    return 0;
}