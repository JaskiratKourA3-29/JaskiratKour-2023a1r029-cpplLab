#include <iostream>
#include <string>
using namespace std;
class Course
{
private:
    string coursename;
    int coursenumber;

public:
    // Parameterized Constructor
    Course(string cn, int cnum)
    {
        coursename = cn;

        coursenumber = cnum;
    }

    // Function to display student details
    void display()
    {
        cout << "Course Name: \t" << coursename;

        cout << " \nCourse Number: \t" << coursenumber;
    }
};

int main()
{
    // Creating an object using the parameterized constructor
    Course c1("C++", 101);

    // Display student details
    c1.display();

    return 0;
}