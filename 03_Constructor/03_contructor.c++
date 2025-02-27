#include <iostream>
using namespace std;

class Car
{
public:
    string model1;
    int manufacturingyear1;
    Car(string model, int manufacturingyear)
    {
        model1 = model;
        manufacturingyear1 = manufacturingyear;
    }

    void DisplayInfo()
    {
        cout << "The Model Of Car Is :-" << model1 << endl;
        cout << "The Manufacturing Year Of Car Is :-" << manufacturingyear1 << endl;
    }
};

int main()
{
    Car car1("Verna", 2024);
    car1.DisplayInfo();
}