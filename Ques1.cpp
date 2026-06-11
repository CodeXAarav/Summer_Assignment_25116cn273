 #include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cout<<"Enter the value of n:\n";
    cin>>n;
    while(n>0)
    {
    sum+=n;
    n--;
    }
    cout<<"The sum of numbers is:\n"<<sum;
    return 0;
}