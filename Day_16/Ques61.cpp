#include <iostream>
using namespace std;
int main() {
           int n;
           cout<<"Enter number of elements: ";
           cin>>n;
          int  ex_sum= n*(n+1)/2;
           int arr[n-1];
           cout<<"Enter "<<n-1<< " elements: ";
         
           for(int i=0;i<n-1;i++){
             cin>>arr[i];
           }  
             int sum=0;
            for(int i=0;i<n-1;i++){
                sum+=arr[i];
            }  
            int miss_num=ex_sum-sum;
           cout<<miss_num;
             
             
    return 0;
}