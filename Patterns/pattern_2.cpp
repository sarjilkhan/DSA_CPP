/*
              *
          *   *
     *    *   *
 *   *    *   *  

*/

#include<iostream>
using namespace std;

int main()
{
        int n;
cin>>n;

int row=1;
while(row<=n){
    int space=n-row;
    while(space){
        cout<<" ";
        space=space-1;
    }
    int col=1;
    while(col<=row){
        cout<<"*";
        col=col+1;
    }  
    cout<<endl;
    row=row+1;
}

    //using for loop
   /*  int n;
    cin>>n;

    for(int row=1;row<=n;row++)
    {
        for(int space=n-row;space;space=space-1)
        {
            cout<<" ";
        }
        for(int col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    } */   
}