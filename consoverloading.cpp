/*program of constructor overloading*/
#include <iostream>
using namespace std;
class Program // class name
{
public:
    Program() // default constructor
    {
        cout << "Default constructor";
    }

public:
    Program(string username, int pin) // parametrized constructor
    {
        cout << "\n Username = " << username;
        cout << "\n pin = " << pin;
    }

public:
    ~Program() // default destructor
    {
        cout << "\n Destructor";
    }
};
int main()
{
    Program obj; // class object

    return 0;
}