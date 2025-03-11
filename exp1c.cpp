/* 1. a) analyze and design classses for student management system*/

/* b) to create a student class , its consructor , destructor and memeber functions
c) to create a course class ,  its consructor , destructor and memeber functions

#include <iostream>
using namespace std;
class course
{
private:
    string coursename, courseid;

public:
    void accept()
    {
        cout << "enter your course name \n ";
        cin >> coursename;

        cout << "enter your course id\n";
        cin >> courseid;
    }

    void display()
    {
        cout << "\n course name  is " << coursename << "\t  course id  is " << courseid;
    }
};

int main()
{
    string coursename, courseid;

    course obj[3];

    int i;
    for (i = 0; i < 3; i++)
    {
        obj[i].accept();
    }
    for (i = 0; i < 3; i++)
    {
        obj[i].display();
    }
}*/

// To create a course class, its constructor, destructor and member functions.
#include <iostream>
using namespace std;
class Course
{
public:
    string CourseName;
    int CourseID;
    int CourseCredits;

public:
    Course(string Name, int ID, int Credits)
    {
        CourseName = Name;
        CourseID = ID;
        CourseCredits = Credits;
    }
    void Display()
    {
        cout << "\n Course Name is " << CourseName << "\t Course Id is " << CourseID;
        cout << "\n Course Credits are " << CourseCredits;
    }
    void CourseAssignment()
    {
        // Here Accept Student Percentage , Attendance and Assign Course According to
        /*1. Percentage greater than 80 or Attendance more than 90 , Course Option ALL
        2.  Percentage between 70 to 80  or Attendance more than 80 Course Option Java
        3. Percentage between 60 to 70  or Attendance more than 70 Course Option CPP
         4.Percentage between 60 to 70  or Attendance more than 60 Course Option PHP
         5. Percentage between 50 to 60  or Attendance more than 50 Course Option C
         */
        float per, Att;
        cout << "\n Enter Your Percentage And Attendance  ";
        cin >> per >> Att;
        if (per >= 80 || Att >= 90)
        {
            cout << "\n You ARe Eligible for all Courses(C,CPP,Java,SQL,PHP)";
        }
    }
};
int main()
{
    Course obj[5] = {{"C", 1, 8}, {"C++", 2, 6}, {"Java", 3, 4}, {"SQL", 4, 12}, {"PHP", 5, 16}};
    int i;
    for (i = 0; i < 5; i++)
    {
        obj[i].Display();
    }
}