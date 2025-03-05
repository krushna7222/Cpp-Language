#include <iostream>
using namespace std;

class Calculator
{
public:
    void calculation(int a, int b)
    {
        cout << "The Addition of Both Number Is :- " << a - b << endl;
    }
};

class Calculator2
{
public:
    int calculation(int a, int b)
    {
        cout << "The Addition of Both Number Is :- " << a + b << endl;
        return 0;
    }
};

int main()
{
    Calculator obj;
    obj.calculation(10, 20);

    Calculator2 obj2;
    obj2.calculation(20, 30);
    obj2.calculation(20, 20);
}