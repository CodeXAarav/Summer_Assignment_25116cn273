#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int j = 0;  // Position for next non-zero element

    // Move all non-zero elements to the front
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    // Fill the remaining positions with zeroes
    while(j < n) {
        arr[j] = 0;
        j++;
    }

    cout << "Array after moving zeroes to end: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}