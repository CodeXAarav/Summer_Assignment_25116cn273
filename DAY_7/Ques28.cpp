#include <iostream>
using namespace std;
int main() {
    long long n, p, num_power = 1;
    cout << "Enter the number and power: ";
    cin >> n >> p;
    while (p > 0) {
        num_power = num_power * n;
        p--;
    }
    cout << num_power;
    return 0;
}