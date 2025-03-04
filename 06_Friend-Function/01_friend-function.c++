#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int id;
    double salary;

public:
    Employee(string empname, int empid, double empsalary) : id(empid), name(empname), salary(empsalary)
    {
    }

    friend void displayDetail(Employee emp1); // Friend Function
};

void displayDetail(Employee emp1)
{
    cout << "The employee Id Is :- " << emp1.id << endl;
    cout << "The employee name Is :- " << emp1.name << endl;
    cout << "The employee salary Is :- " << emp1.salary << endl;
}

int main()
{
    Employee emp1("Krushna", 101, 36000);
    displayDetail(emp1);
}