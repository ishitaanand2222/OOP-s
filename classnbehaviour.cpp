//Creating a class in c++
#include <bits/stdc++.h>
using std::string;
using namespace std;

class Employee{// by default everything is private in c++
public:// modifer is set to public because we want to have it outside the class as well
    string Name;
    string Company;
    int Age;

    void introduce()// behaviour of our class or class method
    {
        cout<<"Name-"<<Name<<"\n";
        cout<<"Company-"<<Company<<"\n";
        cout<<"Age-"<<Age<<"\n";
    }
};

int main()
{
    Employee employee1;//created an instance of our class Employee
    employee1.Name="Ishita";// in order to access the members of the class we need to have them as public
    employee1.Company="Github";
    employee1.Age=21;
    
    Employee employee2;// created another instance of our class.But say you want to have 100 employee then writing the same thing is a
    //tedious task and hence we use the concept of constructors.
    employee2.Name="Anand";
    employee2.Company="Organization";
    employee2.Age=35;

    employee1.introduce();
    employee2.introduce();
}