#include <iostream>
using namespace std;

class Course
{
    string courseName;
    int courseCode;
    int courseCredits;

public:
    // Parameterized Constructor
    Course(string name, int code, int credits)
    {
        courseName = name;
        courseCode = code;
        courseCredits = credits;
    }

    // Member Function to delete details
    void deleteDetails()
    {
        courseName = "";
        courseCode = 0;
        courseCredits = 0;
    }

    void displayDetails()
    {
        if (courseName == "" && courseCode == 0 && courseCredits == 0)
        {
            cout << "Course details have been deleted!";
        }
        else
        {
            cout << "Course Name    : " << courseName;
            cout << "Course Code    : " << courseCode;
            cout << "Course Credits : " << courseCredits;
        }
    }
};

int main()
{
    Course obj1("Operating Systems", 103, 4);
    Course obj2("Data Structures", 101, 3);
    Course obj3("Computer Networks", 202, 3);

    cout << "Course 1 Details";
    obj1.displayDetails();

    cout << "\nCourse 2 Details";
    obj2.displayDetails();

    cout << "\nCourse 3 Details";
    obj3.displayDetails();

    // Deleting course 2 details only
    obj2.deleteDetails();

    cout << "\nAfter Deleting Course 2 Details";

    cout << "\nCourse 1:";
    obj1.displayDetails();

    cout << "\nCourse 2:";
    obj2.displayDetails();

    cout << "\nCourse 3:";
    obj3.displayDetails();

    return 0;
}
