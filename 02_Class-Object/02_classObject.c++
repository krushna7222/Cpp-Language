#include <iostream>
using namespace std;

class Employeedetail
{
public:
    string name;
    float salary;
    int empid;
    string department;

    void Empwork()
    {
        cout << "The Employee work is IT Sector" << endl;
    }
    void EmpPolicy()
    {
        cout << "Employee Policy" << endl;
    }
};

int main()
{
    // take reference of class
    Employeedetail employee1;

    employee1.empid = 101;
    employee1.name = "Hemant Raut";
    employee1.salary = 36000;
    employee1.department = "Development";

    cout << "The Employee Id Is :- " << employee1.empid << endl;
    cout << "The Name Of Employee Is :- " << employee1.name << endl;
    cout << "The Salary Of Employee Is :- " << employee1.salary << endl;
    cout << "The Department Of The Employee Is :- " << employee1.department << endl;

    employee1.Empwork();
    employee1.EmpPolicy();

    cout << "-----------------------------------------------" << endl;

    Employeedetail employee2;

    employee2.empid = 201;
    employee2.name = "Mayur Shinde";
    employee2.salary = 48050.50;
    employee2.department = "Testing";

    cout << "The Employee Id Is :- " << employee2.empid << endl;
    cout << "The Name Of Employee Is :- " << employee2.name << endl;
    cout << "The Salary Of Employee Is :- " << employee2.salary << endl;
    cout << "The Department Of The Employee Is :- " << employee2.department << endl;

    employee2.Empwork();
    employee2.EmpPolicy();

    cout << "-----------------------------------------------" << endl;
}
