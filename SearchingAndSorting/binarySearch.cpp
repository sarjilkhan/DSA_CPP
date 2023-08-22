#include<iostream>
using namespace std;

int binSearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;

    int mid=start+(end-start)/2;   //optimised formula!! --> ...bcz now all int value lie between the int range

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main()
{
    int even[6]={2,4,7,9,16,20};
    int odd[5]={1,5,6,11,19};

    binSearch(even,6,9);
    binSearch(odd,5,5);

    cout<<"Index of 9 is "<<binSearch(even,6,9)<<endl;
    cout<<"Index of 9 is "<<binSearch(odd,5,5)<<endl;
    return 0;
}