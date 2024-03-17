#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (true)
    {
        n++;
        int firstDigit = n / 1000;
        int secondDigit = (n / 100) % 10;
        int thirdDigit = (n / 10) % 10;
        int fourthDigit = n % 10;

        if (firstDigit != secondDigit && firstDigit != thirdDigit && firstDigit != fourthDigit && secondDigit != thirdDigit && secondDigit != fourthDigit && thirdDigit != fourthDigit)
        {
            break;
        }
    }

    cout << n << endl;
}