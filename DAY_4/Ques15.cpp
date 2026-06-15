#include <iostream>
#include <cmath>
using namespace std;
int main() {
int sum=0,num2=0,rem,count=0,num1,num;
cout<<"Enter the number\t";
cin>>num;
num1=num;
while(num>0)
{
    rem=num%10;
    num=num/10;
count+=1;
}
num2=num1;
while(num1>0)
{
rem=num1%10;
sum=sum+pow(rem,count);
num1=num1/10;
}
if (sum==num2)
cout<<"The number entered is an Armstrong number";
else
cout<<"The number entered is not an Armstrong number";
return 0;
}