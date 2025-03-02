#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;

    void changedept(string newdept)
    {
        dept = newdept;
    }

    void displayinfo()
    {

        cout << "The Name Of Teacher Is :- " << name << endl;
        cout << "The Department Of Teacher Is :- " << dept << endl;
    }

    Teacher(string name, string dept)
    {
        this->name = name;
        this->dept = dept;
    }
};

int main()
{
    Teacher t1("Sujit", "Development");
    t1.displayinfo();

    Teacher t2(t1); // t1 is coppied into the t2 object
    t2.displayinfo();
}