#include <bits/stdc++.h>
using namespace std;

class Employee
{
private:// hence we encapsulated our data by making it private
   string Name;
   string Company;
   int Age;
public:
// these function getter and setter are defined under public, because this data is private but we can access this data publicly with 
//help of getter and setter
   void set_name(string name)// setter 
   {
       Name=name;
   }
   string get_name()// getter
   {
       return Name;
   }
   void set_company(string company)
   {
       Company=company;
   }
    string get_company()
   {
       return Company;
   }
    void set_age(int age)
   {
       if(age>=18)//adding some validation rules that when age>=18 then only changes will be made
       Age=age;
   }
   int get_age()
   {
       return Age;
   }
    void introduce()
    {
        cout<<"hello my name is "<<Name<<" and I work for "<<Company<<" and I am "<<Age<<" years old"<<"\n";
    }
    Employee(string name,string company,int age)//constructor
    {
        Name=name;
        Company=company;
        Age=age;
    }
     void AskForPromotion()
    {
        if(Age>30)
        cout<<Name<<" got promoted "<<"\n";
        else 
        cout<<Name<<" not promoted "<<"\n";
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
       void fixBug()
       {
           cout<<get_name()<<" fixed the bug using "<<Favlang<<"\n";
       }
};

int main()
{
    Developer d=Developer("Ishita","Github",21,"C++");
    d.fixBug();
    //In order to access other methods we need to make the constructor public
    d.AskForPromotion();
}