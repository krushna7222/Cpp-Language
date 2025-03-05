#include <iostream>
using namespace std;

class RBI
{
public:
    virtual double rateOfInterest()
    {
        return 9.0;
    }
};

class SBI : public RBI
{
public:
    double rateOfInterest() override
    {
        return 8.5;
    }
};

class HDFC : public RBI
{
public:
    double rateOfInterest() override
    {
        return 8.9;
    }
};

int main()
{
    RBI *bank1 = new SBI();
    RBI *bank2 = new HDFC();

    cout << "The rate Of Interest Of SBI Bank Is :- " << bank1->rateOfInterest() << endl;
    cout << "The rate Of Interest Of HDFC Bank Is :- " << bank2->rateOfInterest() << endl;
}