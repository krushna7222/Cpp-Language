#include <iostream>
using namespace std;

class Employee
{
public:
    virtual double salary()
    {
        double salary = 36500.50;
        return salary;
    }
};

class Manager : public Employee
{
public:
    double salary() override
    {
        double salary = 48300.50;
        return salary;
    }
};

int main()
{
    Employee *emp = new Employee();
    Employee *man = new Manager();

    cout << "The Salary Of Employee Is :- " << emp->salary() << endl;
    cout << "The Salary Of Manager Is :- " << man->salary() << endl;
}
