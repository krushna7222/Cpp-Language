#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;
    double height;

    void run()
    {
        cout << "The Person Can Run" << endl;
    }
    void sleep()
    {
        cout << "The Person Can Sleep" << endl;
    }
    void talk()
    {
        cout << "The Person Can Talk" << endl;
    }
};

int main()
{
    // take reference of class
    Person person1;

    person1.name = "Krushna Shahane";
    person1.age = 21;
    person1.height = 6;

    cout << "The Name Of Person Is :- " << person1.name << endl;
    cout << "The Age Of Person Is :- " << person1.age << endl;
    cout << "The Height Of The Person Is :- " << person1.height << endl;

    cout << "-----------------------------------------------" << endl;

    person1.run();
    person1.sleep();
    person1.talk();
}
