#include <iostream>
using namespace std;
int main() {
    int n ,count=0,rem;
    cout<<"Enter number:\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        rem=n%i;
    if (rem==0)
    {
        count++;
    }
    }
    if(count==2)
    cout<<"The number is prime";
    else
    cout<<"Not a prime";
    return 0;
}