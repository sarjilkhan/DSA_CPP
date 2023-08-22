#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void sort(int arr[],int n)
{
    int i=0,j=n-1;

    while(i<j)
    {
        if(arr[i]==1 && arr[j]==0)
        {
            swap(arr[i],arr[j]);
        }
        else if(arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==1)
        {
            j--;
        }
    }
}
int main()
{
    int arr[6]={0,1,0,0,1,0};
    
    sort(arr,6);
    print(arr,6);
    return 0;
}