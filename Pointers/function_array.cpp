//functionn me array as a pointer pass then we can get the desired part of the array

#include<iostream>
using namespace std;

int getSum(int *arr, int n)// same as(int arr[]) 
{
    cout<<endl<<"Size: "<<sizeof(arr)<<endl;
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum +=i[arr];
        
    }
    return sum;
}
int main()
{
    
    int arr[6]= {1,2,3,4,5,8};

    cout<< "Sum is "<<getSum(arr+3,3)<<endl;

    return 0;
}