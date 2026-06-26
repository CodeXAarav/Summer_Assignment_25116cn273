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
    
    //left rotation
    
    int first_e=arr[0];
    for( int i =0; i<n;i++){
        
    arr[i]=arr[i+1];
    
    }
    arr[n-1]=first_e;
    cout<<"The left rotated array is : ";
    for(int i = 0; i < n; i++) 
    {
        
        cout<<arr[i]<<"\n";
        
    }
    
    return 0;
}