#include <iostream>
using namespace std;
int rev = 0;
void rev_num(int n)
{
    if(n == 0)
        return;
    rev = rev * 10 + n % 10;
    rev_num(n / 10);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    rev_num(n);
    cout << "Reverse of number: " << rev;
    return 0;
}