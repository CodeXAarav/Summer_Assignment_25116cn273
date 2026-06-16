#include <iostream>
using namespace std;

int main() {
    long long num;
    int highestPrime = -1;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            highestPrime = i;
            num /= i;
        }
    }

    cout << "Highest Prime Factor = " << highestPrime;

    return 0;
}