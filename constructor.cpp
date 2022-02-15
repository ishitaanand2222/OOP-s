//constructor is a special type of function which is created each an object of the class is created
//Default constructor is generated by default and automatically by the compiler itself if the user doesnt create a constructor
#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void introduce()
    {
        cout<<"hello my name is "<<Name<<" and I work for "<<Company<<" and I am "<<Age<<" years old"<<"\n";
    }

    Employee(string name,string company,int age)//constructor will have the same name as that of the class
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

    employee1.introduce();
    employee2.introduce();
}