#include <iostream>
using namespace std;
int main() {
    int rows = 5;
    int ascii_val=64;
    for(int i = 1; i <= rows; i++) {
        ascii_val+=1;
        for(int j = 1; j <= i;j++){
          cout << (char)ascii_val << " ";
        }
         cout << "\n"; 
    }

    return 0;
}