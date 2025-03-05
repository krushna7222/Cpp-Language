#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area(float height, float width)
    {
        float result = height * width;
        cout << "The Area Of Rectangle Is :- " << result << endl;
    }
};

class Circle
{
public:
    void area(float Radius)
    {
        float result = 3.14 * (Radius * Radius);
        cout << "The Area Of Circle Is :- " << result << endl;
    }
};

int main()
{
    Rectangle rect;
    rect.area(12, 17);

    Circle circ;
    circ.area(12);
}