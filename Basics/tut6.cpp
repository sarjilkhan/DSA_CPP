// There are two types of header files:
// 1.System header files
#include<iostream>
// 2. User defined header files
// #include "this.h"--> this will produce an error if this.h present in the current directory.

using namespace std;

int main(){
    int a = 4, b = 5;
cout<<"Operators in C++"<<endl;
cout<<"Following are the types of Operators in C++"<<endl;
// Arithmetic operators
cout<<"The value of a + b is "<<a+b<<endl;
cout<<"The value of a - b is "<<a-b<<endl;
cout<<"The value of a * b is "<<a*b<<endl;
cout<<"The value of a / b is "<<a/b<<endl;
cout<<"The value of a % b is "<<a%b<<endl;
cout<<"The value of a++ is "<<a++<<endl;
cout<<"The value of a-- is "<<a--<<endl;
cout<<"The value of ++a is "<<++a<<endl;
cout<<"The value of --a is "<<--a<<endl;
cout<<endl;

// Assignment operators
// int a =3, b=9;
// char d='d';

// Comparison operators
cout<<"Following are the types of Comparison Operators in C++"<<endl;
cout<<"The value of a == b is "<<(a==b)<<endl;
cout<<"The value of a != b is "<<(a!=b)<<endl;
cout<<"The value of a > b is "<<(a>b)<<endl;
cout<<"The value of a < b is "<<(a<b)<<endl;
cout<<"The value of a <= b is "<<(a<=b)<<endl;
cout<<"The value of a >= b is "<<(a>=b)<<endl;
cout<<endl;
    
// Logical operators
cout<<"Following are the types of logical Operators in C++"<<endl;
cout<<"The value of this logical and operator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;
cout<<"The value of this logical or operator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;
cout<<"The value of this logical not operator (!(a==b)) is: "<<(!(a==b))<<endl;

    return 0;
}