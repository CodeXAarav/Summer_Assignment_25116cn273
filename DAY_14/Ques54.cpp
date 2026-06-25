#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
//Array elements input 
    int arr[n];
    cout << "Enter element: ";
    for(int i = 0; i < n; i++) 
    {
        
        cin >> arr[i];
    }
    //frequency of an element 
    
    int target, freq=0;
    cout<<"\nEnter target: ";
    cin>>target;
    cout<<"The target frequency is : ";
    for(int i = 0; i < n; i++)
    {
        if(arr[i]==target)
        {
        freq++;
        }
    }
    cout<<freq;
   
    return 0;
}