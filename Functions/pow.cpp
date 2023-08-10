#include<iostream>
using namespace std;

int pow(int a, int b)
{
    int ans=1;

    for(int i=1;i<=b; i++)
    {
        ans=ans*a;
       
    }
     return ans;
}
int main()
{
    int num1 ,num2;
    cin>>num1 >>num2;

    int ans = pow(num1, num2);
    cout<<ans;


    return 0;
}