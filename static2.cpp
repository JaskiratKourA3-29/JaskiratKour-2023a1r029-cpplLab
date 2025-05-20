/* write a program to craete a class with name countuser
create a function with name count() , this function will display total number of users for this class*/

#include <iostream>
using namespace std;
class CountUser
{
public:
    void count()
    {
        static int users = 13;
        users++;
        cout << "the total number of of users are :- " << users;
    }
};
int main()
{
    CountUser obj1;
    obj1.count();
}