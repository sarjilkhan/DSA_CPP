#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int arr[6]={5,-1,32,0,76,25};
    int brr[5]={76,10,7,17,-4};

    reverse(arr,6);
    reverse(brr,5);

    print(arr,6);
    print(brr,5);
}