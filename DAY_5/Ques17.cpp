#include <iostream>
using namespace std;
int main() {
    int num,divi,sum=0,i;
    cout << "Enter number: ";
    cin >>num;
    for(i=1; i<num;i++)
    {
        if (num%i==0)
        {  divi=i;
           sum=sum+divi;
        }
    }
    if(sum==num)
    cout << "The number is a perfect number";
    else
    cout<<"Not a perfect number";
    return 0;
}