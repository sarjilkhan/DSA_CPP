#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "You are 12 yaers old" << endl;
        break;
    case 18:
        cout << "You are 18 yaers old" << endl;
        break;
    default:
    cout<<"You are neither 12 or 18 years old";
        break;
    }
}