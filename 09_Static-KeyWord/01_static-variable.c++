#include <iostream>
using namespace std;

class Demo
{
public:
    static int mayvar;
};

int Demo::mayvar = 750;

int main()
{
    cout << "The Value Of Static Variable is :- " << Demo::mayvar << endl;
}