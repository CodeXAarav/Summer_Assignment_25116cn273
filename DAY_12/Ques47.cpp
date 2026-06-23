#include <iostream>
using namespace std;

bool isFibonacci(int n)
{
    int a = 0, b = 1;

    while (a < n)
    {
        int c = a + b;
        a = b;
        b = c;
    }

    return a == n || n == 0;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isFibonacci(n))
        cout << "Fibonacci Number";
    else
        cout << "Not a Fibonacci Number";

    return 0;
}