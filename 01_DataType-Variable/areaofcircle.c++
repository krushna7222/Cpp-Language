#include <iostream>
using namespace std;

int main()
{
    int radius;
    float ans;
    float pi = 3.14;

    cout << "Enter The Radius of circule To Get Area :" << endl;
    cin >> radius;

    ans = pi * (radius * radius);

    cout << "The Area Of Circle Is : " << ans << endl;
}