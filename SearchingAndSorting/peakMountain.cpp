#include<iostream>
using namespace std;

int peakNum(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;

    while(s<e) 
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[5]={1,2,4,7,6,};
    
    int ans=peakNum(arr,5);

    cout<<ans;
    
    return 0;
}