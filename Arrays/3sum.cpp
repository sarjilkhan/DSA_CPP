#include<iostream>
using namespace std;

void tripletSum(int arr[],int n,int sum)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(arr[i] + arr[j] +arr[k]==sum)
                {
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k];
                }        
            }
        }
    }
}
int main()
{
    int arr[6]={1,6,9,8,3,4};
    int sum=10;
    tripletSum(arr,6,10);
    return 0;
}