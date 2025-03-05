#include <iostream>
using namespace std;

class Discount
{

public:
    double ammount;
    double discountedprice;

    Discount(double ammount)
    {

        discountedprice = ammount - (ammount * 0.2);
        cout << "The ammount of product is " << ammount << "After 20% discountThe Discounted Price Is " << discountedprice << endl;
    }

    Discount(int ammount)
    {

        discountedprice = ammount - (ammount * 0.1);
        cout << "The ammount of product is " << ammount << "After 10% discount The Discounted Price Is " << discountedprice << endl;
    }
};

int main()
{
    double ammout;
    cout << "Enter The Ammount :- ";
    cin >> ammout;

    if (ammout > 1000)
    {
        Discount obj(ammout);
    }
    else
    {
        Discount obj2((int)ammout);
    }
}