/*wap to display addition , subraction , multiplication  and division of two integers on screen
declare class calculation

write parameterized constructor for initialize num1 and num2
write member function for each operation*/
#include <iostream>
using namespace std;
class calculation

{
    float num1, num2;

public:
    calculation(int n1, int n2)
    {
        num1 = n1;
        num2 = n2;
    }

    void addition()
    {
        float res = num1 + num2;
        cout << "the addition is  " << res;
    }
    void subraction()
    {
        float res = num1 - num2;
        cout << " \nthe subraction is  " << res;
    }
    void multiplication()
    {
        float res = num1 * num2;
        cout << "\nthe multiplication is  " << res;
    }
    void division()
    {
        float res = num1 / num2;
        cout << "\nthe division is  " << res;
    }
};

int main()
{
    float num1, num2;
    cout << "enter num1 ";
    cin >> num1;
    cout << " enter num2 ";
    cin >> num2;
    calculation obj(num1, num2);
    obj.addition();
    obj.subraction();
    obj.multiplication();
    obj.division();
}
