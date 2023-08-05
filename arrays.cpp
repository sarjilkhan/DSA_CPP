#include<iostream>
using namespace std;

int main()
{
//     int arr[3] = {1,2,3};

//     cout<<arr[0];


    //   int marks[6];

    //   for (int i = 0; i < 6; i++)
    //   {
    //     cout<<"Enter the marks of "<<i<<"th student"<<endl;
    //     cin>>marks[i];
    //   }

    //   for (int i = 0; i < 6; i++)
    //   {
    //     cout<<"Marks of "<<i<<"th student is "<<marks[i]<<endl;
        
    //   }
        

        int arr2d[2][3]={
            {1,2,3},
            {6,5,4}
        };
        for (int i = 0; i < 2; i++)
        {
            for(int j =0; j<3; j++)
            {
                cout<<"The value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
            
            }
        }      

}