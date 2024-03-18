#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int n)
{
    string str = to_string(n);
    sort(str.begin(), str.end());
    return unique(str.begin(), str.end()) == str.end();
}

int main()
{
    int l, r;
    cin >> l >> r;

    for (int i = l; i <= r; i++)
    {
        if (isDistinct(i))
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}