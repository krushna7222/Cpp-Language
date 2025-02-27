#include <iostream>
using namespace std;

class Employee
{
public:
    Employee(int empid, string empname, float empsalary, string empdepartment)
    {
        cout << "employee Id is :- " << empid << endl;
        cout << "employee Name is :- " << empname << endl;
        cout << "employee Salary is :- " << empsalary << endl;
        cout << "employee Department is :- " << empdepartment << endl;
    }
};

int main()
{
    int empid;
    string empname;
    float empsalary;
    string empdepartment;

    cout << "Enter The Employee ID :- ";
    cin >> empid;
    cout << "Enter The Employee name :- ";
    cin >> empname;
    cout << "Enter The Employee Salary :- ";
    cin >> empsalary;
    cout << "Enter The Employee Department :- ";
    cin >> empdepartment;

    cout << "--------------------Employee Detail-------------------" << endl;

    Employee obj(empid, empname, empsalary, empdepartment);
}