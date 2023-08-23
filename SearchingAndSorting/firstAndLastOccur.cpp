#include<iostream>
using namespace std;

    int firstOccur(int arr[],int n,int k)
    {
        int s=0,e=n-1;
        int mid=s+(e-s)/2;

        int ans=-1;

        while(s<=e)
        {
            if(k==arr[mid])
            {
                ans=mid;
                e=mid-1;
            }
            else if(k>arr[mid])
            {
                s=mid+1;
            }
            else if(k<arr[mid])
            {
                e=mid-1;
            }
                mid=s+(e-s)/2;
        }
        return ans;
    }

    int lastOccur(int arr[],int n,int k)
    {
        int s=0,e=n-1;
        int mid=s+(e-s)/2;

        int ans=n;

        while(s<=e)
        {
            if(k==arr[mid])
            {
                ans=mid;
                s=mid+1;
            }
            else if(k>arr[mid])
            {
                s=mid+1;
            }
            else if(k<arr[mid])
            {
                e=mid-1;
            }
                mid=s+(e-s)/2;
        }
        return ans;
    }    
int main()
{
    int arr[6]={1,2,3,4,4,5};

    firstOccur(arr,6,4);
    lastOccur(arr,6,4);

    cout<<firstOccur(arr,6,4)<<endl;
    cout<<lastOccur(arr,6,4)<<endl;
    return 0;
}