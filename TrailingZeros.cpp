#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin >> n;

    long temp = 1;
    long ans = 0, i = 1;

    while (temp > 0)
    {
        temp = n / pow(5, i);
        ans += temp;
        i++;
    }

    cout << ans << endl;
}