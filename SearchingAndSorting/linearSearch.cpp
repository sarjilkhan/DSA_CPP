#include<iostream>
using namespace std;

bool search(int arr[],int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
main()
{   
    int arr[5]={-21,76,-5,9,23};
       
    cout<<"Enter the element search for : ";
    int key;
    cin>>key;

    bool found = search(arr,5,key);

    if(found)
    {
        cout<<"Element found"<<endl;
    }
    else{
    cout<<"Element not found"<<endl;
    }

    return 0;
}