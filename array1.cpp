/*program to demonstrate the implementation of array using direct initialization method*/

#include <iostream>
using namespace std;
class program
{
private:
    int adv[5] = {1, 2, 3, 4, 5};
    int weak[5] = {6, 7, 14, 16, 146};
    int i;

public:
    void display()
    {
        cout << "list of advance learners  ";
        for (i = 0; i < 5; i++)
        {
            cout << adv[i] << " \t";
        }

        cout << "\n list of weak leaners";
        for (i = 0; i < 5; i++)
        {
            cout << weak[i] << "\t";
        }
    }
};

int main()
{
    program obj;
    obj.display();
}