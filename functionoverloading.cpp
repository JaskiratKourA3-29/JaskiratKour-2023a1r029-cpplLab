/*program to demonstrate the concept of function overloading . create a class with name shapes , create a function
 with anme area() , with area function calculate  area of circle , area of rectangle , area of traingle ,
 using function overloading*/
#include <iostream>
using namespace std;

class Shapes
{
    float length, breadth;

public:
    void Area(float l, float b)
    {
        length = l;
        breadth = b;
        float res = length * breadth;
        cout << "Area of rectangle is  " << res;
    }

public:
    void Area(float radius)
    {

        float res = 3.14 * radius * radius;
        cout << "\n area of circle is " << res;
    }

public:
    void Area(int base, int heigth)
    {

        float res = 0.5 * base * heigth;
        cout << "\narea of triangle  is \n " << res;
    }
};

int main()
{
    Shapes obj;

    float radius;
    cout << "Enter radius \t";
    cin >> radius;
    obj.Area(radius);

    float length, breadth;
    cout << " \n enter length and breadth \t";
    cin >> length;
    cin >> breadth;
    obj.Area(length, breadth);

    int base, heigth;
    cout << "\n enter base and heigth \t";
    cin >> base;
    cin >> heigth;
    obj.Area(base, heigth);
}