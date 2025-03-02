#include <iostream>
using namespace std;

class Student
{

public:
    string *stdname;
    float *cgpa;
    long long *adharno;

    Student(string name, float gpa, long long adhar)
    {
        stdname = new string(name);
        cgpa = new float(gpa);
        adharno = new long long(adhar);
    }

    // Student(Student &obj)
    // {
    //     // stdname = new string(*obj.stdname);
    //     // cgpa = new float(*obj.cgpa);
    //     // adharno = new long long(*obj.adharno);
    //     stdname = stdname;
    //     cgpa = obj.cgpa;
    //     adharno = obj.adharno;
    // }
    void newstudentData(string name, float gpa, long long adhar)
    {
        stdname = new string(name);
        cgpa = new float(gpa);
        adharno = new long long(adhar);
    }
};

int main()
{
    Student std1("Hemraj", 8.25, 784585253698);
    Student std2 = std1;
    Student std3 = std1;

    // *std2.stdname = "Suyash";
    // *std2.cgpa = 7.66;
    // *std2.stdname = 745896352547;

    // *std3.stdname = "Mahesh";
    // *std3.cgpa = 7.70;
    // *std3.stdname = 256425687489;

    std2.newstudentData("Suyash", 7.25, 254585693658);
    std3.newstudentData("Heena", 6.53, 3658987458);

    cout << "--------Data Of 1st Student---------" << endl;

    cout << "The Name Of Student Is :- " << *std1.stdname << endl;
    cout << "The CGPA Of Student Is :- " << *std1.cgpa << endl;
    cout << "The Adhar Number Of Student Is :- " << *std1.adharno << endl;

    cout << "--------Data Of 2st Student----------" << endl;

    cout << "The Name Of Student Is :- " << *std2.stdname << endl;
    cout << "The CGPA Of Student Is :- " << *std2.cgpa << endl;
    cout << "The Adhar Number Of Student Is :- " << *std2.adharno << endl;

    cout << "-------Data Of 3st Student-----------" << endl;

    cout << "The Name Of Student Is :- " << *std3.stdname << endl;
    cout << "The CGPA Of Student Is :- " << *std3.cgpa << endl;
    cout << "The Adhar Number Of Student Is :- " << *std3.adharno << endl;
}