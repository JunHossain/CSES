#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (max(a, b) <= 2 * min(a, b))
        {
            (a + b) % 3 == 0 ? cout << "YES" << endl : cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}