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
        int arr[8] = {0, 1, 0, 1, 0, 1, 0, 0};
        int ok = 1;

        for (int i = 0; i < str.length(); i++)
        {
            int vowel = 0;

            if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            {
                vowel = 1;
            }

            if (vowel != arr[i])
            {
                ok = 0;
                break;
            }
        }

        if (ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}