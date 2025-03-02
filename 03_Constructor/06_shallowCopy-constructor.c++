#include <iostream>
using namespace std;

class ShallowCopy
{

public:
    int *data;

    ShallowCopy(int value)
    {
        data = new int(value); // allocate dynamic memory using new keyword in C++
    }

    ShallowCopy(ShallowCopy &obj)
    {
        data = obj.data; // shallow Copy
    }
};

int main()
{
    ShallowCopy obj1(100);
    ShallowCopy obj2 = obj1;

    *obj2.data = 200; // change the value of obj2 but it also change value of obj1 this is ShallowCopy

    cout << "The Value Of Obj 1 Is :- " << *obj1.data << endl;
    cout << "The Value Of Obj 2 Is :- " << *obj2.data << endl;
}