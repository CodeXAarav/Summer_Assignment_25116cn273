#include <iostream>
using namespace std;
int main() {
    int n, rem , prod=1;
    cout<<"Enter number:\n";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        prod=prod*rem;
        n=n/10;
    }
    cout<<"The product of digits is:\n"<<prod;
    return 0;
}