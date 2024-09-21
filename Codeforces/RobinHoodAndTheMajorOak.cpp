#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int years, leaves_remain;
        cin >> years >> leaves_remain;

        int odd_year = (years + 1) / 2 - (years - leaves_remain + 1) / 2;

        odd_year % 2 == 0 ? cout << "YES\n" : cout << "NO\n";
    }
}