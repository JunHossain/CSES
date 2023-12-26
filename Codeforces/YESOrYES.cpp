#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        for (int i = 0; i < 3; i++)
        {
            str[i] = toupper(str[i]);
        }

        string str2 = "YES";

        if (str == str2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}