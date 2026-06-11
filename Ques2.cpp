#include <iostream>
using namespace std;
int main() {
    int n ,table=0 ;
    cout<<"Enter the value of n for its table :\n";
    cin>>n;
    for(int i=1;i<11;i++)
    {
    table=n*i;
    cout<<n<<"*"<<i<<"="<<table<<endl;
    }
    return 0;
}