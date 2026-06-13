#include <iostream>
using namespace std;
int main() {
    int n, rem ,n1, rev=0;
    cout<<"Enter number:\n";
    cin>>n;
    n1=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==n1)
    cout<<"The number is a palindrome";
    else
    cout<<"Not a palindrome";
    return 0;
}