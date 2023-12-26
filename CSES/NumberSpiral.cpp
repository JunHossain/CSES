#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long row, col;
        cin >> row >> col;
        unsigned long long ans;

        if (row == col)
        {
            ans = row * col - (row - 1);
        }
        else if (row > col)
        {
            if (row % 2 != 0)
            {
                ans = (row * row - (row - 1)) - (row - col);
            }
            else
            {
                ans = (row * row - (row - 1)) + (row - col);
            }
        }
        else
        {
            if (col % 2 != 0)
            {
                ans = (col * col - (col - 1)) + (col - row);
            }
            else
            {
                ans = (col * col - (col - 1)) - (col - row);
            }
        }

        cout << ans << endl;
    }
}