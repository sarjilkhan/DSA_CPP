#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[],int n)
{
    int maxi=INT_MIN;

    for(int i=0;i<n;i++)
    {
        maxi=max(arr[i],maxi);
    }
    return maxi;
}

int getMin(int arr[],int n)
{
    int mini=INT_MAX;

    for(int i=0;i<n;i++)
    {
        mini=min(arr[i],mini);
    }
    return mini;
}
int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0; i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"The maxm value of this array is "<<getMax(arr,size)<<endl;
    cout<<"The minm value of this array is "<<getMin(arr,size)<<endl;

    return 0;
}