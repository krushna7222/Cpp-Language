#include <iostream>
using namespace std;
class Calculator
{
public:
    void calculation(int a, int b)
    {
        cout << "The Addition of Both Number Is :- " << a + b << endl;
    }
    int calculation(int a)
    {
        cout << "The Squre of Number Is :- " << a * a << endl;
        return 0;
    }
};

int main()
{
    Calculator obj;
    obj.calculation(10, 20);
    obj.calculation(12);
}