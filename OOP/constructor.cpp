#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int salary;

    Employee(string n, int s, int sp)
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " dollars" << endl;
    }
    void getsecretPassword()
    {
        cout<<"The secret password of first employee is "<<this->secretPassword<<endl;
    }
    private:
    int secretPassword;
};

class Programmer : public Employee
{
    public:
    int errors;
};
int main()
{
    Employee sar("Sarjil", 344, 45348732);
    // sar.name="sarjil";
    // sar.salary=100;
    // cout<<"The name of our first employee is "<<sar.name <<" and his salary is "<<sar.salary<<" dollars"<<endl;
    sar.printDetails();
    sar.getsecretPassword();
    // cout<<sar.secretPassord;
    return 0;
}
