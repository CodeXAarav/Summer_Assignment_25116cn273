#include <iostream>
using namespace std;
int main() {
    int n,rem,sum=0;
    cout<<"Enter digit:\n";
    cin>>n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"The sum of digits in a number is:\n"<<sum;
    return 0;
}