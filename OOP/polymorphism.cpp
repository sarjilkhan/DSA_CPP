//base class-->super class or parent class  
//deerived class-->child class
//hiding complex things behind the procedure that makes those things look simple

 #include<iostream>
using namespace std;

class AbstractEmployee {      //contract
    virtual void AskForPromotion()=0;  
};

class Employee:AbstractEmployee {

//encapsulation->To make these properties private and get access of this from outside the class through the methods that do have access of the private properties.
private:
    string Company;
    int Age;
protected:
    string Name;
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
            virtual void Work() {
                cout<< Name <<" is checking email, task backlog, performing tasks..."<<endl;
            }
};

class Developer: public Employee { //Developer-->child class or derived class and Employee-->base class or parent class    
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
    {
       FavProgrammingLanguage = favProgrammingLanguage; 
    }
    void FixBug() {
        cout<< Name <<" fixed bug using "<< FavProgrammingLanguage<<endl;
    }
    void Work() {
                cout<< Name <<" is writing "<<FavProgrammingLanguage<<" code"<<endl;
            }
};
class Teacher: public Employee {
public:    
    string Subject;
    void PrepareLesson() {
        cout<<Name<<" is preparing "<<Subject<<" lesson"<<endl;
    }
    Teacher(string name, string company, int age, string subject)
    :Employee(name,company,age)
    {
        Subject = subject;
    }
    void Work() {
                cout<< Name <<" is teaching "<< Subject<<endl;
            }
};
int main()     //The most common use of polymorphism is when a parent class reference is used to refer to a child class object
{

    Developer d = Developer("Sarjil","S.A.K", 23,"C++");   
    Teacher t = Teacher("Jack","Cool school",35,"History");
    // d.Work();
    // t.Work();

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->Work();
    e2->Work();
 
}