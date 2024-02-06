#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int firstBlack = 0;
        int lastBlack = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 'B')
            {
                firstBlack = i;
                break;
            }
        }

        for (int i = n - 1; i > firstBlack; i--)
        {
            if (arr[i] == 'B')
            {
                lastBlack = i;
                break;
            }
        }

        if ((lastBlack - firstBlack) + 1 < 1)
        {
            cout << "1\n";
        }
        else
            cout << (lastBlack - firstBlack) + 1 << endl;
    }
}