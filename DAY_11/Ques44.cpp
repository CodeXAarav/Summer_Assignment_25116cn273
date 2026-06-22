#include <iostream>
using namespace std;
int fact(int a)
{
    int fac=1;
    while(a>0){
    fac=fac*a;
    a--;}
    return fac;
    
}
int main()
{
    int x;
    cout<<"Enter number: ";
    cin >> x;
    cout << "fact = " << fact(x);
    return 0;
}