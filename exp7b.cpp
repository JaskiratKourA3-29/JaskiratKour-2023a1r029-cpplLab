/*implement polymorphism for member function of ug class, pg class and diploma class.
polymorphism :- function overloading , function overriding .
write a program to
a. create a base class with name mystudy app ,
b. create a login() function and overload this function for admin (2 parameters Username(admin)
and password(123),Student(1 parameter registration number(b/e 1 to 100)) and guest
(no parmeter)
c. create a virtual function greet() display message according to login user
d. create a  pure virtual function accept() to store information of the user and
e. display() function to display user information
f. create  a derived class ug_class, called after successful login by the user
g. override greet() function of parent class and display message with available list of ug course.
h. override base class function accept() and accept details of the user for admission in ug class .
i. override base class function display() to display information entered by the user.
j. create a derived class pg class , called after successful login by the user
k.  override greet() function of parent class and display message with available list of pg course.
l. override base class function accept() and accept details of the user for admission in pg class .
m. override base class function display() to display information entered by the user.
n. create a derived class diploma_class, called after successful login by the user
o. override greet() function of parent class and display message with available list of diploma  course.
p. override base class function accept() and accept details of the user for admission in diploma class .
q. override base class function display() to display information entered by the user. */
#include <iostream>
using namespace std;

class MyStudy_App
{
protected:
    string user_type;
    string name;

public:
    // Function overloading for login
    void login(string username, int password)
    {
        if (username == "Admin" && password == 123)
        {
            cout << "Enter Admin name: ";
            cin >> name;
            user_type = "Admin";
        }
        else
        {
            cout << "Invalid credentials for login as Admin\n";
        }
    }

    void login(int reg_number)
    {
        if (reg_number >= 1 && reg_number <= 100)
        {
            cout << "Enter Student name: ";
            cin >> name;
            user_type = "Student";
        }
        else
        {
            cout << "Invalid registration number\n";
        }
    }

    void login()
    {
        cout << "Guest login successful.\n";
        user_type = "Guest";
    }

    // Virtual greet function
    virtual void greet()
    {
        if (user_type == "Admin")
            cout << "Welcome Admin\n";
        else if (user_type == "Student")
            cout << "Welcome Student\n";
        else
            cout << "Welcome Guest\n";
    }

    // Pure virtual function
    virtual void accept() = 0;

    // Virtual display
    virtual void display()
    {
        cout << "User Type: " << user_type << "\nName: " << name << endl;
    }
};

// UG class
class UG : public MyStudy_App
{
protected:
    string course;
    int age, percentage;

public:
    string courses[5] = {"ENGINEERING", "BA LLB", "BCA", "B.COM", "MBA"};

    void greet() override
    {
        cout << "\nWelcome to the UG Section!\nAvailable UG Courses:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "- " << courses[i] << endl;
        }
    }

    void accept() override
    {
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter 12th %: ";
        cin >> percentage;
        cout << "Enter UG course name: ";
        cin >> course;
    }

    void display() override
    {
        cout << "\n[UG Admission Info]\nName: " << name
             << "\nAge: " << age
             << "\n12th %: " << percentage
             << "\nChosen UG Course: " << course << endl;
    }
};

// PG class
class PG : public MyStudy_App
{
protected:
    string course;
    int age, percentage;

public:
    string courses[3] = {"MTECH", "MSC", "PHD"};

    void greet() override
    {
        cout << "\nWelcome to the PG Section!\nAvailable PG Courses:\n";
        for (int i = 0; i < 3; i++)
        {
            cout << "- " << courses[i] << endl;
        }
    }

    void accept() override
    {
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter UG %: ";
        cin >> percentage;
        cout << "Enter PG course name: ";
        cin >> course;
    }

    void display() override
    {
        cout << "\n[PG Admission Info]\nName: " << name
             << "\nAge: " << age
             << "\nUG %: " << percentage
             << "\nChosen PG Course: " << course << endl;
    }
};

// DIPLOMA class
class DIPLOMA : public MyStudy_App
{
protected:
    string course;
    int age, percentage;

public:
    string courses[4] = {"ELECTRICAL", "MECHANICAL", "SOFTWARE", "HARDWARE"};

    void greet() override
    {
        cout << "\nWelcome to the DIPLOMA Section!\nAvailable Diploma Courses:\n";
        for (int i = 0; i < 4; i++)
        {
            cout << "- " << courses[i] << endl;
        }
    }

    void accept() override
    {
        cout << "Enter your age: ";
        cin >> age;
        cout << "Enter 12th %: ";
        cin >> percentage;
        cout << "Enter Diploma course name: ";
        cin >> course;
    }

    void display() override
    {
        cout << "\n[DIPLOMA Admission Info]\nName: " << name
             << "\nAge: " << age
             << "\n12th %: " << percentage
             << "\nChosen Diploma Course: " << course << endl;
    }
};

int main()
{
    // UG user1;
    // user1.login(10);
    // user1.greet();
    // user1.accept();
    // user1.display();

    // PG user2;
    // user2.login();
    // user2.greet();
    // user2.accept();
    // user2.display();

    DIPLOMA user3;
    user3.login("Admin", 123);
    user3.greet();
    user3.accept();
    user3.display();
    return 0;
}
