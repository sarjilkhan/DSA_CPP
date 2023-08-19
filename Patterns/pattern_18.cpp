/*
A
B C
C D E
D E F G
E F G H I
*/
#include<iostream>
using namespace std;

int main()
{
/*  int n;
cin>>n;

int row=1;
while(row<=n){
    int col=1;
    char ch='A'+row-1;
    while(col<=row){
        cout<<ch<<" ";
        ch=ch+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
} */

//Second approach
int n;
cin>>n;

int row=1;
while(row<=n){
    int col=1;
    while(col<=row){
        cout<<char('A'+row+col-2)<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
}