/*program to demonstrate the working of an array of object*/
#include <iostream>
using namespace std;
class books_records
{
private:
    int BookNo;
    string Bookname;

public:
    books_records(int b, string n)
    {
        BookNo = b;
        Bookname = n;
    }
    void display()
    {
        cout << "\n book number is " << BookNo << "\t book name is " << Bookname;
    }
};

int main()
{
    books_records obj[5] = {{1, "cpp"}, {2, "java"}, {3, "c"}, {4, "c#"}, {5, "php"}}; // array of object
    int i;
    for (i = 0; i < 5; i++)
    {
        obj[i].display();
    }
}