// To cre<ate a student class, its constructor, destructor and member functions.
#include <iostream>
using namespace std;
class Student
{
public:
    string StudentName;
    int StudentId;
    float Marks, per;

public:
    Student(string Name, int Id, float Mark)
    {
        StudentName = Name;
        StudentId = Id;
        Marks = Mark;
    }
    void Display()
    {
        cout << "\nName = " << StudentName << "\t Marks are ";
        cout << Marks;
    }
    char Grade()
    {
        per = Marks / 500 * 100;
        if (per >= 80 && per <= 100)
        {
            cout << "\n Your Grade is A";
            return 'A';
        }
        else if (per >= 70 && per < 80)
        {
            cout << "\n Your Grade is B";
            return 'B';
        }
        else if (per >= 60 && per < 70)
        {
            cout << "\n Your Grade is C";
            return 'C';
        }
        else if (per >= 50 && per < 60)
        {
            cout << "\n Your Grade is D";
            return 'D';
        }
        else
        {
            cout << "\n Not Qualified. ";
        }
    }
    void Club_Assignment(char grade)
    {
        if (grade == 'A')
        {
            cout << "\n Sports Club";
        }
        else if (grade == 'B')
        {
            cout << "\n Eco Club";
        }
        else if (grade == 'C')
        {
            cout << "\n NCC Club";
        }
        else if (grade == 'D')
        {
            cout << "\n NSS Club";
        }
    }

    int search()
    {
        int id1;
        cout << "\n Enter your Student Id";
        cin >> id1;
        return id1;
    }

public:
    ~Student()
    {
        cout << "Destructor Invoked";
    }
};
int main()
{
    Student obj[5] = {{"Ram", 101, 450}, {"Sham", 102, 480}, {"Sita", 103, 350}, {"Gita", 104, 250}, {"Raman", 105, 300}};
    int i, id2, c = 0;
    char res;
    for (i = 0; i < 5; i++)
    {
        cout << "\n Information of Student with id " << obj[i].StudentId;
        obj[i].Display();
        res = obj[i].Grade();
        obj[i].Club_Assignment(res);
    }
    id2 = obj[1].search();

    for (i = 0; i < 5; i++)
    {
        if (id2 == obj[i].StudentId)
        {
            cout << "\n Student Id is valid ";
            cout << "\n Student Name is " << obj[i].StudentName;
            c++;
        }
    }
    if (c == 0)
    {
        cout << "id enter is invalid";
    }
    return 0;
}