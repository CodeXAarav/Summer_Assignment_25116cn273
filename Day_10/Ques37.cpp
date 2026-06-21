#include <iostream>
using namespace std;

int main() {
    int rows = 4;

    for(int i = 1; i <= rows; i++) {

        // Left spaces
        for(int j = 1; j <= rows - i; j++) {
            cout << " ";
        }

        // Stars
        for(int j = 1; j <= 2*i - 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}