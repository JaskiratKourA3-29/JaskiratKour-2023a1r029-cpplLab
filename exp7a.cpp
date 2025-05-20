/* Exp:- 7a To implement inheritance for a UG Course class, PG Course class and Diploma Course class
using multilevel inheritance
Write a program to
a. create a base class with name UG Course class
b. create a function wih name Subjectlist() , here in this function display a list of Subjects
and ask user to select a choice from given list.
c.create a function wih name MarksObtained(),here in this function ask user to enter marks obtained
in the selected course.
d.create aderived class with name PG Course class,
e.create a function wih name SpecializationList(),here in this function display a list of Subjects
and ask user to select a choice from given list.
f. create a function wih name MarksObtained() ,here in this function ask user to enter marks obtained
in the selected course.
d.create a derived class with name Diploma Course class
e. create a function wih name Courselist(),here in this function display a list of Subjects
and ask user to select a choice from given list
f. create a function wih name MarksObtained(),here in this function ask user to enter marks obtained
in the selected course.
g. create a derived class with nane Result class
h. create a function wih name SelectionCriteria() , here in this function display a Selection criteria
for the Post.
Post 1: Software Developer :
5 Points for Percentage More than 80 perecent in UG
5 Points for Percentage More_than_80_perecent in PG
5 points for percentage more than 80 perecent in diploma
i. create a function with name  finalresult(),candidates scored more 12 points are qualified for this post.*/

#include <iostream>
using namespace std;
class UG
{
protected:
    string ug_course;
    int u_marks;

public:
    void SubjectList()
    {
        int choice;
        string course[3] = {"Maths", "Physics", "Chemistry"};
        cout << "Courses for UG are : " << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << course[i] << endl;
        }
        cout << "Enter 1 for Maths\nEnter 2 for Physics\nEnter 3 for Chemistry\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            ug_course = "Maths";
            break;
        case 2:
            ug_course = "Physics";
            break;
        case 3:
            ug_course = "Chemistry";
            break;
        default:
            cout << "Invalid choice\n";
        }
    }
    void MarksObtained0()
    {
        cout << "Your selected course for UG is : " << ug_course << endl;
        cout << "Enter marks scored in selected course : " << endl;
        cin >> u_marks;
        cout << "Your marks in UG are : " << u_marks << endl;
    }
};
class PG : public UG
{
protected:
    string pg_course;
    int p_marks;

public:
    void SpecialiczationList()
    {
        int choice;
        cout << "\nCourses for PG are : " << endl;
        cout << "Enter 1 for DATA-SCIENCE\nEnter 2 for AI/ML\nEnter 3 for CS\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            pg_course = "DATA_SCIENCE";
            break;
        case 2:
            pg_course = "AI/ML";
            break;
        case 3:
            pg_course = "CS";
            break;
        default:
            cout << "Invalid choice\n";
        }
    }
    void MarksObtained1()
    {
        cout << "Your selected course for PG is : " << pg_course << endl;
        cout << "Enter marks scored in selected course : " << endl;
        cin >> p_marks;
        cout << "Your marks in PG are : " << p_marks << endl;
    }
};
class Diploma : public PG
{
protected:
    string diploma_course;
    int d_marks;

public:
    void CourseList()
    {
        int choice;
        cout << "\nCourses for diploma are : " << endl;
        cout << "Enter 1 for ELECTRICAL\nEnter 2 for MECHANICAL\nEnter 3 for AUTOMATION\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            diploma_course = "ELECTRICAL";
            break;
        case 2:
            diploma_course = "MECHANICAL";
            break;
        case 3:
            diploma_course = "AUTOMATION";
            break;
        default:
            cout << "Invalid choice\n";
        }
    }
    void MarksObtained2()
    {
        cout << "Your selected course for DIPLOMA is : " << diploma_course << endl;
        cout << "Enter marks scored in selected course : " << endl;
        cin >> d_marks;
        cout << "Your marks in DIPLOMA are : " << d_marks << endl;
    }
};
class result : public Diploma
{
protected:
    int points;

public:
    void SelectionCriteria()
    {
        cout << "\nYou're eligible for the post as Software developer\n";
        cout << "If you have more than 10 points\n";
        cout << "5 points If you have scored more than 80 percent in UG\n";
        cout << "5 points If you have scored more than 80 percent in PG\n";
        cout << "5 points If you have scored more than 80 percent in DIPLOMA\n";
        if (u_marks >= 80 && p_marks >= 80 && d_marks >= 80)
        {
            points = 15;
        }
        else if (u_marks >= 80 && p_marks >= 80 && d_marks < 80)
        {
            points = 10;
        }
        else if (u_marks >= 80 && p_marks < 80 && d_marks >= 80)
        {
            points = 10;
        }
        else if (u_marks < 80 && p_marks >= 80 && d_marks > +80)
        {
            points = 10;
        }
        else
        {
            points = 0;
        }
    }
    void FinalResult()
    {
        if (points >= 12)
        {
            cout << "Your points are : " << points << endl;
            cout << "You're selected as software developer\n";
        }
        else
        {
            cout << "Your points are : " << points << endl;
            cout << "You did'nt have much points to achieve the position as software developer\n";
        }
    }
};
int main()
{
    result user;
    user.SubjectList();
    user.MarksObtained0();

    user.SpecialiczationList();
    user.MarksObtained1();

    user.CourseList();
    user.MarksObtained2();

    user.SelectionCriteria();
    user.FinalResult();
}

/*
#include <iostream>

#include <string>

using namespace std;

// Base class

class UGCourse
{

protected:
    string ugSubject;

    float ugMarks;

public:
    void subjectList()
    {

        cout << "\n--- UG Course Subjects ---\n";

        cout << "1. Computer Science\n";

        cout << "2. Electronics\n";

        cout << "3. Mechanical\n";

        cout << "Enter your choice (1-3): ";

        int choice;

        cin >> choice;

        switch (choice)
        {

        case 1:
            ugSubject = "Computer Science";
            break;

        case 2:
            ugSubject = "Electronics";
            break;

        case 3:
            ugSubject = "Mechanical";
            break;

        default:
            ugSubject = "Unknown";
            break;
        }

        cout << "Selected UG subject: " << ugSubject << endl;
    }

    void marksObtained()
    {

        cout << "Enter marks obtained in UG (out of 100): ";

        cin >> ugMarks;
    }
};

// Derived class

class PGCourse : public UGCourse
{

protected:
    string pgSubject;

    float pgMarks;

public:
    void specializationList()
    {

        cout << "\n--- PG Course Specializations ---\n";

        cout << "1. Data Science\n";

        cout << "2. VLSI Design\n";

        cout << "3. Robotics\n";

        cout << "Enter your choice (1-3): ";

        int choice;

        cin >> choice;

        switch (choice)
        {

        case 1:
            pgSubject = "Data Science";
            break;

        case 2:
            pgSubject = "VLSI Design";
            break;

        case 3:
            pgSubject = "Robotics";
            break;

        default:
            pgSubject = "Unknown";
            break;
        }

        cout << "Selected PG specialization: " << pgSubject << endl;
    }

    void marksObtained()
    {

        cout << "Enter marks obtained in PG (out of 100): ";

        cin >> pgMarks;
    }
};

// Further derived class

class Result : public PGCourse
{

    float diplomaMarks;

    int score = 0;

public:
    void diplomaMarksObtained()
    {

        cout << "\nEnter marks obtained in Diploma (out of 100): ";

        cin >> diplomaMarks;
    }

    void selectionCriteria()
    {

        cout << "\n--- Selection Criteria for Software Developer ---\n";

        if (ugMarks > 80)
            score += 5;

        if (pgMarks > 80)
            score += 5;

        if (diplomaMarks > 80)
            score += 5;

        cout << "Total Score: " << score << " out of 15\n";
    }

    void finalResult()
    {

        if (score > 12)
        {

            cout << "Result: Qualified for the post of Software Developer\n";
        }
        else
        {

            cout << "Result: Not Qualified\n";
        }
    }
};

// Main Function

int main()
{

    Result candidate;

    candidate.subjectList();

    candidate.marksObtained();

    candidate.specializationList();

    candidate.PGCourse::marksObtained(); // call base class marksObtained()

    candidate.diplomaMarksObtained();

    candidate.selectionCriteria();

    candidate.finalResult();

    return 0;
}*/