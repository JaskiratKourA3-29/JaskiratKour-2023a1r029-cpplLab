#include <iostream>
using namespace std;

// Base class
class Device
{
public:
    Device(string brand)
    {
        cout << "Device constructor called. Brand: " << brand << endl;
    }
};

// Derived class
class MobilePhone : public Device
{
public:
    MobilePhone(string brand, string model) : Device(brand)
    {
        cout << "MobilePhone constructor called. Model: " << model << endl;
    }
};

int main()
{
    // Creating a MobilePhone object
    MobilePhone phone("Samsung", "Galaxy A35");
    return 0;
}
