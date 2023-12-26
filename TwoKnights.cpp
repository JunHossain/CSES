#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll totalPositions, attackingPositions;

    for (ll i = 1; i <= n; i++)
    {
        totalPositions = ((i * i) * (i * i - 1)) / 2; // i^2C2
        attackingPositions = 4 * (i - 1) * (i - 2);

        cout << totalPositions - attackingPositions << endl;
    }
}