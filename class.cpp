#include<iostream>
using namespace std;

 class Employee 
{
        public:
            string name;
            int salary;


void printDetails()
{
     cout<<"The name of our first employee is "<<this->name <<" and his salary is "<<this->salary<<" dollars"<<endl;
}
};
int main()
{ 
    Employee sar;
    sar.name="sarjil";
    sar.salary=100;
    // cout<<"The name of our first employee is "<<sar.name <<" and his salary is "<<sar.salary<<" dollars"<<endl; 
    sar.printDetails();
    return 0;
}

