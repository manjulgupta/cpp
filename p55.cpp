/*
Create a class called `Employee` to represent an employee in a company.
The class should have private member variables `name`, `id`, and `salary`.
Write a parameterized constructor that takes three arguments to set the
values of `name`, `id`, and `salary`. Implement a member function called
`raiseSalary()` that increases the employee's salary by a given percentage.
Also, write a member function called `display()` that displays the employee's info.
*/

//

#include<bits/stdc++.h>
using namespace std;

class Employee{
    string name;
    int id;
    int salary;
    public:
    Employee(string en,int eid,int esal){
        name=en;
        id=eid;
        salary=esal;
    }
    void raiseSalary(int n){
        salary=salary*(100+n)/100;
    }
    void display(){
        cout<<"Name: "<<endl;
        cout<<name<<endl;
        cout<<"ID: "<<endl;
        cout<<id<<endl;
        cout<<"Salary: "<<endl;
        cout<<salary<<endl<<endl;
    }
};

int main()
{
    Employee Rahul("Rahul",518,1000);
    Employee Ayush("Ayush",544,1300);
    Rahul.display();
    Rahul.raiseSalary(5);
    Rahul.display();
 return 0;
}

//  cout<<<<endl;