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
    //reverse
    int left=0, right=n-1;
    while(left<right){
    int swap;
    swap=arr[left];
    arr[left]=arr[right];
    arr[right]=swap;
    left++;
    right--;
    }
    cout<<"The reverse array is : ";
    for(int i = 0; i < n; i++) 
    {
        
        cout<<arr[i]<<"\n";
        
    }
    
    return 0;
}