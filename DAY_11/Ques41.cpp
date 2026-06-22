#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    int sum = add(a, b);
    cout <<"Sum is "<< sum;
    return 0;
}