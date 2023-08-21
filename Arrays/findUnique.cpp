#include<iostream>
using namespace std;

void findUnique(int *arr, int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];
    }
    cout<<ans;
}

int main()
{
    int arr[5]={2,4,2,1,1};

    findUnique(arr,5);

    return 0;
}