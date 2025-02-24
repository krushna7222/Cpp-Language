#include <iostream>
using namespace std;

int main()
{
    string name, qualification;
    int age;
    long long mobile;
    float salary;

    cout << "Enter The Name Of Employee : ";
    cin >> name;
    cout << "Enter The age Of Employee : ";
    cin >> age;
    cout << "Enter The Mobile No. Of Employee : ";
    cin >> mobile;
    cout << "Enter The qualification Of Employee : ";
    cin >> qualification;
    cout << "Enter The salary Of Employee : ";
    cin >> salary;

    cout << "----------Employee Detail----------" << endl;

    cout << "Name of Emp is :- " << name << endl;
    cout << "Name of Age is :- " << age << endl;
    cout << "Name of Mobile No. is :- " << mobile << endl;
    cout << "Name of Qualification is :- " << qualification << endl;
    cout << "Name of Salary is :- " << salary << endl;
}