
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

    int search()
    {
        int id1;
        cout << "\n Enter your Student Id";
        cin >> id1;
        return id1;
    }
};
int main()
{
    Student obj[5] = {{"Ram", 101, 450}, {"Sham", 102, 480}, {"Sita", 103, 350}, {"Gita", 104, 250}, {"Raman", 105, 300}};
    int i, id2;

    for (i = 0; i < 5; i++)
    {
        cout << "\n Information of Student with id " << obj[i].StudentId;
        obj[i].Display();
    }
    id2 = obj[1].search();

    for (i = 0; i < 5; i++)
    {
        if (id2 == obj[i].StudentId)
        {
            cout << "\n Student Id is valid ";
            cout << "\n Student Name is " << obj[i].StudentName;
        }
    }

    return 0;
}