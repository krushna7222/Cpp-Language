#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    virtual void DisplayInfo(string name, int age) = 0;
};

class Student : public Person
{
public:
    void DisplayInfo(string name, int age) override
    {
        cout << "--------Student Info----------" << endl;
        cout << "Student name :- " << name << endl;
        cout << "Student Age :- " << age << endl;
    }
};
class Proffesor : public Person
{
public:
    void DisplayInfo(string name, int age) override
    {
        cout << "--------Proffesor Info----------" << endl;

        cout << "Proffesor name :- " << name << endl;
        cout << "Proffesor Age :- " << age << endl;
    }
};
class OtherStaff : public Person
{
public:
    void DisplayInfo(string name, int age) override
    {
        cout << "--------Trainer Info----------" << endl;

        cout << "Trainer name :- " << name << endl;
        cout << "Trainer Age :- " << age << endl;
    }
};

int main()
{
    Student obj;
    obj.DisplayInfo("Mahesh", 22);

    Proffesor prof;
    prof.DisplayInfo("prof. Lahare", 38);

    OtherStaff trainer;
    trainer.DisplayInfo("Samir sir", 32);
}