/*wap to print your name , age and city and pincode on screen using class*/
#include <iostream>
using namespace std;
class program
{
private:
    string Name;
    string city;
    int age;
    int pin_code;

public:
    void Display()
    {
        cout << "\n enter your name\n";
        cin >> Name;
        cout << "\n enter your age\n";
        cin >> age;
        cout << "\n enter your city name";
        cin >> city;
    }
};
int main()
{
    program obj;
    obj.Display();
    return 0;
}