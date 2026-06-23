#include <iostream>
using namespace std;

bool isPalindrome(int num)
{
    int original = num;
    int reverse = 0;

    while(num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return original == reverse;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}