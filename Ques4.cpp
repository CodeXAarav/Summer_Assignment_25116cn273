#include <iostream>
using namespace std;
int main() {
    int n,count=0;
    cout<<"Enter digit:\n";
    cin>>n;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    cout<<"The number of digits in number is:\n"<<count;
    return 0;
}