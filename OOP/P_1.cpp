 #include<iostream>
using namespace std;

class Employee {
public:        
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(){
        cout<<"Name - "<<Name <<endl;
        cout<<"Company - "<<Company<<endl;
        cout<<"Age - "<<Age<<endl;
            }
            Employee(string name, string company, int age) {
                Name = name;
                Company= company;
                Age=age;
            }
};
int main()
{
    Employee employee1=Employee("Sarjil","S.A.K",23); 
    // employee1.Name = "Sarjil";
    // employee1.Company = "S.A.K";
    // employee1.Age = 23;
    employee1.IntroduceYourself(); 

    Employee employee2=Employee("John","Amazon",35);
    // employee2.Name="John";
    // employee2.Company="Amazon";
    // employee2.Age=35;
    employee2.IntroduceYourself();

}