#include <iostream>
using namespace std;
int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        int ascii_val = 65; 
    
        for(int j = 1; j <= i;j++){
          cout << (char)ascii_val << " ";
            ascii_val++;
        }
        cout << "\n"; 
    }

    return 0;
}