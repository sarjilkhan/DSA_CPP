/*  A B C D E
    B C D E F
    C D E F G
    D E F G H
    E F G H I
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
    while(col<=n){
    cout<<char('A'+row+col-2)<<" ";
    col=col+1;
}
cout<<endl;
row=row+1;
}
}