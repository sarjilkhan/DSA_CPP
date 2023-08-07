 #include<iostream>
using namespace std;

class Employee {

//To make these properties private and get access of this from outside the class through the methods that do have access of the private properties.
private:
    string Name;
    string Company;
    int Age;

public:        
   void setName(string name){   //setter
    Name = name;
   }
   string getName() {           //getter
    return Name;
   }
   void setCompany(string company) {
    Company = company;
   }
   string getCompany() {
    return Company;
   }
   void setAge(int age) {
    if(age>=18)
    Age = age;
   }
   int  getAge() {
    return Age;
   }
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

    employee1.setAge(15);//can check age>=18
    cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old"<<endl;

}