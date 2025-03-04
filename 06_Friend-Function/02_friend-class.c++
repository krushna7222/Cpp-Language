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

    friend class HR; // Friend Class
};

class HR
{
public:
    void displayDetail(Employee emp1)
    {
        cout << "The employee Id Is :- " << emp1.id << endl;
        cout << "The employee name Is :- " << emp1.name << endl;
        cout << "The employee salary Is :- " << emp1.salary << endl;
    }
};

int main()
{
    Employee emp1("Satish", 201, 37500);
    HR hr1;
    hr1.displayDetail(emp1);
}