#include <iostream>
using namespace std;
int main() {
int a=0,b=1,c,i,n;
cout<<"Enter the value of n:\t";
cin>>n;
cout<<a;
cout<<b;
for(i=3;i<=n;i++){
 c=a+b;
 cout<<c;
 a=b;
 b=c;
}
  return 0;
}