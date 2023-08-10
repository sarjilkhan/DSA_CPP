#include<iostream>
using namespace std;

void update(int **p2)
{
    // p2 = p2 + 1;
     //kuch change hoga  --> NO
    // *p2 = *p2 + 1;
    //kuch change hoga --> YES
    **p2 = **p2 + 1;
    //kuch change hoga --> YES
}

int main()
{
    int i = 5;
    int *p1=&i;
    int**p2=&p1;
    
    cout<<"Before"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;

    update(p2);
    cout<<"After"<<endl;
    cout<<i<<endl;
    cout<<p1<<endl;
    cout<<p2<<endl;

}