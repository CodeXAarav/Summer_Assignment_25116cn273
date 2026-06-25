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
    //linear search
    int target, pos=-1;
    cout<<"\nEnter target";
    cin>>target;
    for(int i = 0; i < n; i++)
    {
        pos+=1;
        if(arr[i]==target)
        {
        cout<<"The target is at index : "<<pos;
        }
        
    }
    
    return 0;
}