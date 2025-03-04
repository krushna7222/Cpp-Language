#include <iostream>
using namespace std;

class Product
{
private:
    int product_id;
    string product_name;
    float product_price;
    float discount_price;

public:
    void proid(int proid)
    {
        product_id = proid;
    }
    void proname(string proname)
    {
        product_name = proname;
    }
    void proprice(float proprice)
    {
        float discountprice = proprice * 0.2;
        discount_price = proprice - discountprice;
        product_price = proprice;
    }

    void display()
    {
        cout << "The Product Id Is :- " << product_id << endl;
        cout << "The Product name Is :- " << product_name << endl;
        cout << "The Product price Is :- " << product_price << endl;
        cout << "And Your price aftetr Discount is :- " << discount_price << endl;
    }
};

int main()
{
    Product product1;
    product1.proid(101);
    product1.proname("Ghee");
    product1.proprice(599);
    product1.display();
}