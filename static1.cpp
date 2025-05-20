#include <iostream>
using namespace std;
class program
{
public:
    void fun()
    {
        static int a = 0; // static  variable
        a++;
        cout << "value of a is " << a;
    }
};

int main()
{
    program obj1;
    obj1.fun();
    program obj2;
    obj2.fun();
    program obj3;
    obj3.fun();
}
/* ex:- in online test we cannot declare functions and varaibles as static as it will retain the time it take to complete one test .*/