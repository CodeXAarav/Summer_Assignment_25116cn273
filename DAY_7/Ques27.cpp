#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter the number:";
    cin >> n;

    while (n > 0) {
        if (n % 2 == 1)
            count++;

        n = n / 2;
    }

    cout << count;
    return 0;
}