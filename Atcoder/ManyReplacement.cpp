// The code works but TLE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    int query;
    cin >> query;

    while (query--)
    {
        char a, b;
        cin >> a >> b;

        for (int i = 0; i < n; i++)
        {
            if (str[i] == a)
            {
                str[i] = b;
            }
        }
    }

    cout << str << endl;
}