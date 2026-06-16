#include <iostream>
using namespace std;
int main() {
    int num,rem,num1,sum=0,i,fact=1;
    cout << "Enter number: ";
    cin >>num;
    num1=num;
    while(num>0){
       rem=num%10;
       fact=1;
    for(i=1;i<=rem;i++)
    {
      fact=fact*i;
    }
      sum=sum+fact;

    num=num/10;
    }
    if(sum==num1)
    cout << "The number is a strong number";
    else
    cout<<"Not a strong number";
    return 0;}