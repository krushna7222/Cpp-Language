#include <iostream>
using namespace std;

class Teacher
{
public:
    string name1;
    string subject1;
    string department1;
    int age1;

    void TeacherDetail(string name, string subject, string department, int age)
    {
        name1 = name;
        subject1 = subject;
        department1 = department;
        age1 = age;
    }

    void DisplayData()
    {
        cout << "The name of Teacher Is :- " << name1 << endl;
        cout << "The Subject of Teacher Is :- " << subject1 << endl;
        cout << "The department of Teacher Is :- " << department1 << endl;
        cout << "The age of Teacher Is :- " << age1 << endl;
    }

    void changeDipart(string newDipartment)
    {
        department1 = newDipartment;
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