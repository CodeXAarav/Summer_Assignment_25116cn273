#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int num,pos=-1,rem,deci=0;
    cout<<"Enter Binary number:";
    cin>>num;
    while(num>0){
    rem=num%10;
    pos=pos+1;
    deci=deci+rem*pow(2,pos);
    num=num/10;
    }
    cout<<"The number in decimal is:"<<deci;
    return 0;
}