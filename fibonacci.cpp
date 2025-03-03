/*write a program to print fibonacci  from users*/
#include <iostream>
using namespace std;

// Function to print Fibonacci series up to n terms
void printFibonacci(int n)
{
    int a = 0, b = 1, next;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < n; i++)
    {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    printFibonacci(n);
    return 0;
}
