//the most common use of polymorphism is when a parent class refernce is used to refer to a child class object

#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:// hence we encapsulated our data by making it private
   string Company;
   int Age;
protected:
   string Name;//data members can access in the class as well as derived classes
public:
    Employee(string name,string company,int age)//constructor
    {
        Name=name;
        Company=company;
        Age=age;
    }

     virtual void work()// virtual methods check if any other derived class has the same function as work if yes
     //then implement that function
    {
        std::cout<< Name <<" is checking email "<<"\n";
    }

};
class Developer:public Employee{//In order to access other methods we need to make the constructor public
    public:
       string Favlang;
       Developer(string name,string company,int age,string favlang)
       :Employee(name,company,age)// we need not to care about name,company,age becuz they will be managed by the employee
       //constructor
       {
           Favlang=favlang;
       }
       void work()
       {
          std:: cout<<Name<<" is writing code in "<<Favlang<<"\n";
       }
};
class Teacher:public Employee{
    public:
      string Subject;

       Teacher(string name,string company,int age,string subject):Employee(name,company,age)
       {
           Subject=subject;
       }
        void work()
       {
          std:: cout<<Name<<" teaches "<<Subject<<"\n";
       }
};

int main()
{
    Developer d=Developer("Ishita","Github",21,"C++");
    Teacher t=Teacher("Johnny","HS school",25,"History");

    // d.work();
    // t.work();

    Employee* e1=&d;
    Employee* e2=&t;// emp2 will hold the reference of the teacher

    e1->work();//-> is used when you want to access members using pointers
    e2->work();
}