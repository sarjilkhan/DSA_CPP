/*    A B C D E
      F G H I J
      K L M N O
      P Q R S T
      U V W X Y
*/
#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;

int row=1;
char start='A';
while(row<=n){
    int col=1;
    while(col<=n){
        cout<<start<<" ";
        start=start+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
}
}
