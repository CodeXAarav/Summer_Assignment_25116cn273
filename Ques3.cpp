#include <iostream>
using namespace std;
int main() {
    int n , fact=1;
    cout<<"Enter the value of n for its factorial :\n";
    cin>>n;
    while(n>0)
    {
    fact=fact*n;
    n--;
    }
    cout<<"the factorial is:\n"<<fact<<endl;
    return 0;
}