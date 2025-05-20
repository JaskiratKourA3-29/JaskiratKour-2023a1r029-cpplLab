#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Shape
{
public:
    virtual void draw() = 0;   // Pure virtual function for drawing
    virtual double area() = 0; // Pure virtual function for area
    virtual ~Shape() {}        // Virtual destructor
};

// Circle class
class Circle : public Shape
{
    double radius;

public:
    Circle(double r) : radius(r) {}
    void draw() override
    {
        cout << "Drawing Circle with radius: " << radius << endl;
    }
    double area() override
    {
        return 3.14159 * radius * radius;
    }
};

// Rectangle class
class Rectangle : public Shape
{
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    void draw() override
    {
        cout << "Drawing Rectangle (width: " << width << ", height: " << height << ")" << endl;
    }
    double area() override
    {
        return width * height;
    }
};

// Triangle class
class Triangle : public Shape
{
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}
    void draw() override
    {
        cout << "Drawing Triangle (base: " << base << ", height: " << height << ")" << endl;
    }
    double area() override
    {
        return 0.5 * base * height;
    }
};

// Main function to simulate GUI drawing
int main()
{
    Shape *shapes[3];

    shapes[0] = new Circle(5);
    shapes[1] = new Rectangle(4, 6);
    shapes[2] = new Triangle(3, 7);

    for (int i = 0; i < 3; i++)
    {
        shapes[i]->draw();
        cout << "Area: " << shapes[i]->area() << endl
             << endl;
        delete shapes[i]; // Clean up memory
    }

    return 0;
}
