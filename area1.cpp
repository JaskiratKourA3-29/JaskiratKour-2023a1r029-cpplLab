/* write a program to print the area of the rectangle by creating a class name 'Area' having two fuctions
first named as 'setDim' takes the lengthy and breadth of rectangle as parameters and the second  fuction named  as getarea returns
the area of rectangle . length and breadth of the rectangle are entered through  keyboard . */

#include <iostream>
using namespace std;
class Area
{
    float length, breadth;

public:
    void SetDim(float l, float b)
    {
        length = l;
        breadth = b;
    }

public:
    void Getarea()
    {
        cout << "Area of rectangle is :" << length * breadth;
    }
};

int main()
{
    float length, breadth;

    cout << "enter length and breadth";
    cin >> length >> breadth;
    Area obj;
    obj.SetDim(length, breadth);
    obj.Getarea();
}
