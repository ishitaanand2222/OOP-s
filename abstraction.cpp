//Hiding complex things in order to show things simple
#include <bits/stdc++.h>
using namespace std;

class AbstractEmployee{// the contract which class(company) needs to sign
   virtual void AskForPromotion()=0;// the implementation which the class needs to show the implementaion of
};

class Employee:AbstractEmployee{// now class Employee signed the contract, now it has to show the implementaion of
// AskForPromotion
private:
   string Name;
   string Company;
   int Age;
public:
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

int main()
{
    Employee employee1=Employee("Ishita","github",21);
    Employee employee2=Employee("Anand","organisation",35);

    employee1.AskForPromotion();
    employee2.AskForPromotion();
}
