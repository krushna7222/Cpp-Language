#include <iostream>
using namespace std;

// Multiple Inhetritance inherit the multiple class by one class

class A
{
public:
    int a;
    void funA(int n)
    {
        a = n;
    }
};

class B
{
public:
    int b;
    void funB(int n)
    {
        b = n;
    }
};

class C : public A, public B
{
public:
    void Display()
    {
        cout << "The Value Of a is - " << a << endl;
        cout << "The Value Of b is - " << b << endl;
        cout << "The Value Of a+b is - " << a + b << endl;
    }
};

int main()
{
    C obj;
    obj.funA(10);
    obj.funB(20);
    obj.Display();
}