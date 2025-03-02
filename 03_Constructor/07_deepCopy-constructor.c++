#include <iostream>
using namespace std;

class DeepCopy
{

public:
    int *data;

    DeepCopy(int value)
    {
        data = new int(value); // allocate dynamic memory using new keyword in C++
    }

    DeepCopy(DeepCopy &obj)
    {
        data = new int(*obj.data); // Deep Copy
    }
};

int main()
{
    DeepCopy obj1(100);
    DeepCopy obj2 = obj1;

    *obj2.data = 200; // change the value of obj2 but not change value of obj1 this is deepCopy

    cout << "The Value Of Obj 1 Is :- " << *obj1.data << endl;
    cout << "The Value Of Obj 2 Is :- " << *obj2.data << endl;
}