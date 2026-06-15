#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter the range: ";
    cin >> start >> end;

    for (int i = start; i <= end; i++)
    {
        int temp = i;
        int count = 0;
        int sum = 0;

        // Count digits
        while (temp > 0)
        {
            count++;
            temp /= 10;
        }

        temp = i;

        // Calculate Armstrong sum
        while (temp > 0)
        {
            int rem = temp % 10;
            sum += pow(rem, count);
            temp /= 10;
        }

        if (sum == i)
            cout << i << " ";
    }

    return 0;
}