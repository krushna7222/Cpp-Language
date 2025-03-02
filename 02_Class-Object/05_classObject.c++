#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string subject;
    string department;
    int age;

    void TeacherDetail(string name, string subject, string department, int age)
    {
        this->name = name;
        this->subject = subject;
        this->department = department;
        this->age = age;
    }

    void DisplayData()
    {
        cout << "The name of Teacher Is :- " << name << endl;
        cout << "The Subject of Teacher Is :- " << subject << endl;
        cout << "The department of Teacher Is :- " << department << endl;
        cout << "The age of Teacher Is :- " << age << endl;
    }

    void changeDipart(string newDipartment)
    {
        department = newDipartment;
    }
};

int main()
{
    Teacher teacher1;
    teacher1.TeacherDetail("Sunil", "Java", "Development", 23);
    teacher1.DisplayData();

    cout << "----------------------------" << endl;

    teacher1.changeDipart("Testing");
    teacher1.DisplayData();
}