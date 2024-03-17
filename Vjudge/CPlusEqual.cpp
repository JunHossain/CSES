#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int count = 0;

        while (a <= n && b <= n)
        {
            if (a > b)
            {
                b += a;
            }
            else
            {
                a += b;
            }
            count++;

            // cout << a << " " << b << endl;
        }

        cout << count << endl;
    }
}