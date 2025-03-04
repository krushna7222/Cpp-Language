#include <iostream>
using namespace std;

void areaOfCircle(int radius, float pi)
{
    float ans = pi * (radius * radius);
    cout << "The Area Of Circle Is : " << ans << endl;
}

int main()
{
    int radius;
    float pi = 3.14;

    cout << "Enter The Radius of circule To Get Area :" << endl;
    cin >> radius;

    areaOfCircle(radius, pi);
}