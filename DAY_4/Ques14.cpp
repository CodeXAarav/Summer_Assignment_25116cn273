#include <iostream>
using namespace std;
int main() {
int a=0,b=1,c,i,n;
cout<<"Enter the nth term:\t";
cin>>n;
for(i=3;i<=n;i++){
 c=a+b;
 a=b;
 b=c;
}
cout<<c;
  return 0;
}