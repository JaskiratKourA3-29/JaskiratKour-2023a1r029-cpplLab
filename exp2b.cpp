#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;
    int rollNo;

public:
    // Parameterized Constructor
    Student(string n, int a, int r)
    {
        name = n;
        age = a;
        rollNo = r;
    }

    // Function to display student details
    void display()
    {
        cout << "Student Name: " << name;
        cout << "\nAge: " << age;
        cout << " \nRoll Number:" << rollNo;
    }
};

int main()
{
    // Creating an object using the parameterized constructor
    Student s1("John Doe", 20, 101);

    // Display student details
    s1.display();

    return 0;
}