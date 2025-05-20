#include <iostream>
using namespace std;

class Course
{
    string courseName;
    int courseCode;
    int courseCredits;

public:
    // Only Parameterized Constructor
    Course(string name, int code, int credits)
    {
        courseName = name;
        courseCode = code;
        courseCredits = credits;
    }

    int getCode()
    {
        return courseCode;
    }

    void displayDetails()
    {
        cout << "\nCourse Name    : " << courseName;
        cout << "\nCourse Code    : " << courseCode;
        cout << "\nCourse Credits : " << courseCredits << endl;
    }
};

int main()
{
    Course courses[3] = {
        Course("DBMS", 101, 4),
        Course("Operating Systems", 102, 3),
        Course("Computer Networks", 103, 3)};

    cout << "List of All Courses";
    for (int i = 0; i < 3; i++)
    {
        courses[i].displayDetails();
    }

    int searchID;
    cout << "\nEnter Course ID : ";
    cin >> searchID;

    for (int i = 0; i < 3; i++)
    {
        if (courses[i].getCode() == searchID)
        {
            cout << "\n  Result" << endl;
            courses[i].displayDetails();
            return 0;
        }
    }

    cout << "\nCourse Not Found!" << endl;
    return 0;
}
