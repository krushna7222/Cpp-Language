#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int age;
    double salary;

public:
    void empname(string empname)
    {
        name = empname;
    }

    void empage(int empage)
    {
        age = empage;
    }

    void empsalary(double empsalary)
    {
        salary = empsalary;
    }

    void display()
    {
        cout << "The name Of Employee Is :- " << name << endl;
        cout << "The age Of Employee Is :- " << age << endl;
        cout << "The salary Of Employee Is :- " << salary << endl;
    }
};

int main()
{
    Employee emp1;
    emp1.empname("Krushna");
    emp1.empage(21);
    emp1.empsalary(35000);
    emp1.display();
}