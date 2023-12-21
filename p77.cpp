//ALMOST ALL ON OOPs
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int salary;
    char grade;

public:
    static int eCode;
    int n;
    void setGrade(char grade)
    {
        this->grade = grade;
        cout << endl;
    }

    static void updater()
    {
        eCode++;
    }
    int nEmployee();
    Employee();
    Employee(string name, int salary, char grade)
    {
        this->name = name;
        this->salary = salary;
        this->grade = grade;
        n = ++eCode;
        cout<<endl<<name<<" entered successfully. :"<<eCode<<endl;
    }
} Ramesh;

int Employee::eCode = 0;

Employee::Employee()
{
    cout << endl
         << "Blank Object Created" << endl;
    updater();
    n=eCode;
}

int Employee::nEmployee()
{
    cout << "No. of Employee(s) = " << eCode << endl;
}

int main()
{
    Employee Suresh("Suresh Kr", 10000, 'B');
    Employee Mahesh=Suresh;
    Employee Rajesh(Mahesh);
    Employee Hitesh;
    cout << Employee::eCode<<endl;
    Ramesh.nEmployee();
    cout<<Ramesh.n<<endl;

    cout<<"OTHER EXPERIMENTS"<<endl;

    //
    Employee* Brijesh=new Employee("Brijesh Y", 16000, 'A');
    delete Brijesh;

    return 0;
}