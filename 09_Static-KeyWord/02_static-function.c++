#include <iostream>
using namespace std;

class Calculation
{
public:
    static int add(int a, int b)
    {
        return a + b;
    }

    static int sub(int c, int d)
    {
        return c - d;
    }
};

int main()
{

    int sum = Calculation::add(10, 20);
    int sub = Calculation::sub(110, 20);

    cout << "The Addition is :- " << sum << endl;
    cout << "The Substraction is :- " << sub << endl;
}