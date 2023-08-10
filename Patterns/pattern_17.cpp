/*
A
B B
C C C
D D D D
E E E E E
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

int row=1;
while(row<=n){
    int col=1;
    while(col<=row)
    {
        char ch='A';
        cout<<(char)(ch + row -1)<<" ";
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}
}