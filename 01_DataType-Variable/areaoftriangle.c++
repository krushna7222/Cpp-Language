#include <iostream>
using namespace std;

int main()
{
    int base, length, ans;

    cout << "Enter The base of triangle To Get Area :" << endl;
    cin >> base;
    cout << "Enter The length of triangle To Get Area :" << endl;
    cin >> length;

    ans = 0.5 * (base * length);

    cout << "The Area Of Triangle Is : " << ans << endl;
}