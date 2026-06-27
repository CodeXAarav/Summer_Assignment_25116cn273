#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter required sum: ";
    cin >> sum;

    cout << "Pairs are:\n";

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == sum) {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    return 0;
}