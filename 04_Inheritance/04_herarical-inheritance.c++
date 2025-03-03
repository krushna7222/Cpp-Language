#include <iostream>
using namespace std;

class Vehicle
{
public:
    string company;
    string model;
    int year;

    void display()
    {
        cout << "The Company Name IS :- " << company << endl;
        cout << "The Model Name IS :- " << model << endl;
        cout << "The Year of Manufacturing IS :- " << year << endl;
    }
};

class FourWheeler : public Vehicle
{
public:
    int NoOfDoor = 5;
    int NoOfWheel = 4;
    void displayFourWheelInfo()
    {
        cout << "No Of Door Id :- " << NoOfDoor << endl;
        cout << "No Of Wheel Id :- " << NoOfWheel << endl;
    }
};

class TwoWheeler : public Vehicle
{
public:
    int CC = 150;
    int NoOfWheel = 2;
    void displayTwoWheelInfo()
    {
        cout << "How Many CC Engine Id :- " << CC << endl;
        cout << "No Of Wheel Id :- " << NoOfWheel << endl;
    }
};

int main()
{
    cout << "-----------Two Wheeler-------------" << endl;

    FourWheeler Car;
    Car.company = "Mahindra";
    Car.model = "Scorpio";
    Car.year = 2024;
    Car.display();
    Car.displayFourWheelInfo();

    FourWheeler Car2;
    Car2.company = "Hyundai";
    Car2.model = "Creata";
    Car2.year = 2024;
    Car2.display();
    Car2.displayFourWheelInfo();

    cout << "-----------Two Wheeler-------------" << endl;

    TwoWheeler Bike;
    Bike.company = "Bajaj";
    Bike.model = "Pulser";
    Bike.year = 2021;
    Bike.display();
    Bike.displayTwoWheelInfo();

    TwoWheeler Bike2;
    Bike2.company = "Hero";
    Bike2.model = "Splender";
    Bike2.year = 2003;
    Bike2.display();
    Bike2.displayTwoWheelInfo();
}
