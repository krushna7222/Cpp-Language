#include <iostream>
using namespace std;

class Product
{
public:
    Product() // non parametorised Constructor
    {
        cout << "The First Constructor Print In Product Class" << endl;
    }
    Product(int age)
    {
        cout << "The Age Of USer Is :-" << age << endl;
    }

    Product(int num1, int num2) // parametorised Constructor
    {
        cout << "The Addition Of Two Number Is :- " << num1 + num2 << endl;
    }
};

int main()
{
    Product obj;
    Product obj1(21);
    Product obj2(10, 20);
}