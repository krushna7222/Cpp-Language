#include <iostream>
using namespace std;

class shape
{
public:
    virtual void Draw() = 0; // this is pure virtual function mandetory for Abstract Class
};

class circle : public shape
{
public:
    void Draw() override
    {
        cout << "The Circle Shape Is Draw By Abstract Class" << endl;
    }
};

int main()
{
    circle obj;
    obj.Draw();
}