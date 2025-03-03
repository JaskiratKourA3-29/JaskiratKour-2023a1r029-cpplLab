/*wap to create a class student_management_system
 stores thestudent info (name,registration number , mobile nukmber) of 10 students
 display records using array of objects*/

#include <iostream>
using namespace std;
class student_management_system
{
private:
    int mobileno, regno;
    string name;

public:
    void accept()
    {
        cout << "name of student ";
        cin >> name;
        cout << "registration number is ";
        cin >> regno;
        cout << "mobile number is ";
        cin >> mobileno;
    }
    void display()
    {
        cout << "\n Name of student is " << name << "\t registrartion number is " << regno << " \t the mobile number is " << mobileno;
    }
};

int main()
{

    int mobileno, regno;
    string name;

    student_management_system obj[2]; // array of object
    int i;
    for (i = 0; i < 2; i++)
    {
        obj[i].accept();
    }
    for (i = 0; i < 2; i++)
    {
        obj[i].display();
    }
}