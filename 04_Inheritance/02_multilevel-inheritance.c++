#include <iostream>
using namespace std;

// Multilevel level Inheritance

class Aniaml
{
public:
    void eat()
    {
        cout << "This Animal Can Eat" << endl;
    }
    void sleep()
    {
        cout << "This Animal Can Sleep" << endl;
    }

    void run()
    {
        cout << "This Animal Can Run" << endl;
    }
};

class Dog : public Aniaml
{
public:
    void bark()
    {
        cout << "This Animal Can Bark" << endl;
    }
};

class BabyDog : public Dog
{
public:
    void weeping()
    {
        cout << "The BabyDog Can Weeping" << endl;
    }
};

int main()
{
    Dog Tommy;
    Tommy.eat();
    Tommy.run();
    Tommy.sleep();
    Tommy.bark();

    cout << "----------For Baby Dog-------------" << endl;

    BabyDog Moti;
    Moti.eat();
    Moti.run();
    Moti.sleep();
    Moti.weeping();
}