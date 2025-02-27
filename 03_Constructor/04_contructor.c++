#include <iostream>
using namespace std;

class Car
{
public:
    string model;
    int manufacturingyear;
    Car()
    {
        cout << "Enter Model Of Car :-";
        cin >> model;
        cout << "Enter Model Of Car :-";
        cin >> manufacturingyear;
        // DisplayInfo();
    }

    void DisplayInfo()
    {
        cout << "The Model Of Car Is :-" << model << endl;
        cout << "The Manufacturing Year Of Car Is :-" << manufacturingyear << endl;
    }
};

int main()
{
    Car car1;
    cout << "------------Details-------------" << endl;
    car1.DisplayInfo();
}