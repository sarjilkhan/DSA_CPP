#include<iostream>
using namespace std;

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    
}
void swapAlter(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int even[6]={8,3,4,7,5,6};
    int odd[5]={3,4,5,7,8};

    swapAlter(even,6);
    print(even,6);

    cout<<endl;

    swapAlter(odd,5);
    print(odd,5);

    return 0;
}