//abstraction->hiding complex things behind the procedure that makes those things look simple

 #include<iostream>
using namespace std;

class AbstractEmployee {      //contract
    virtual void AskForPromotion()=0;  
};

class Employee:AbstractEmployee {

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
            void AskForPromotion() {
                if (Age > 30)
                cout<<Name<<" got promoted!" <<endl;
                else
                cout<<Name<<", sorry NO promotion for you!"<<endl;
            }
};
int main()
{
    Employee employee1=Employee("Sarjil","S.A.K",23); 
    Employee employee2=Employee("John","Amazon",35);
    
    employee1.AskForPromotion();
    employee2.AskForPromotion();

}