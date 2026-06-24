#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    float avg;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    avg = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;

    return 0;
}