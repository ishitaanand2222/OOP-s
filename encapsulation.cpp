//Bundling data and methods (that operates of these data) to avoid other classes to make changes to these data directly.We want other
//classes to make changes to our data but in our own way
#include<bits/stdc++.h>
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

};

int main()
{
    Employee employee1=Employee("Ishita","github",21);
    Employee employee2=Employee("Anand","organisation",35);

    employee1.set_age(17);// we upgraded the value of our age using setter
    employee2.set_age(45);

    cout<<employee1.get_name()<<" is "<<employee1.get_age()<<" years old now \n";// we  fetched it using getter
    cout<<employee2.get_name()<<" is "<<employee2.get_age()<<" years old now \n";


}