/*write a program to print the area of the rectangle by creating a class name 'Area' having one fuction
length and breadth of the rectangle are entered through  keyboard using parameterized constructor. */

#include <iostream>
using namespace std;
class Area
{

public:
    Area(float length, float breadth)
    {
        float res = length * breadth;
        cout << "Area of rectangle is  :" << res;
    }
};

int main()
{
    float length, breadth;

    cout << "enter length ";
    cin >> length;
    cout << "enter breadth ";
    cin >> breadth;
    Area obj(length, breadth);
}