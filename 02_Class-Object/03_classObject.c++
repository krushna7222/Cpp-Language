#include <iostream>
using namespace std;

class Products
{
public:
    void productDetail(int proid, string proname, string procategory, float proprice)
    {

        cout << "---------------------------------------" << endl;
        cout << "Product Id Is :- " << proid << endl;
        cout << "Product Name Is :- " << proname << endl;
        cout << "Product Category Is :- " << procategory << endl;
        cout << "Product Price Is :- " << proprice << endl;
    }
};

int main()
{

    Products product1;
    int id;
    string name, category;
    float price;

    cout << "Enter The Product Id :-";
    cin >> id;
    cout << "Enter The Product Name :-";
    cin >> name;
    cout << "Enter The Product Category :-";
    cin >> category;
    cout << "Enter The Product Price :-";
    cin >> price;

    product1.productDetail(id, name, category, price);
}
