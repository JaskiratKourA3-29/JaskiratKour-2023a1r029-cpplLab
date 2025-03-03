/*wap to print even and odd numbers in an array . range is from 1 to 100*/
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = i + 1;
    }

    cout << "Even numbers: ";
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    cout << "Odd numbers: ";
    for (int i = 0; i < 100; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}