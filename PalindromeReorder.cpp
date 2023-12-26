#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int length = str.length();
    vector<int> letters(26, 0);

    for (int i = 0; i < length; i++)
    {
        letters[str[i] - 'A']++;
    }

    /*for (int i = 0; i < 26; i++)
    {
        cout << letters[i] << " ";
    }
    cout << endl;*/

    int oddPosition = -1;

    for (int i = 0; i < 26; i++)
    {
        if (letters[i] % 2 == 1)
        {
            if (oddPosition == -1)
            {
                oddPosition = i;
            }
            else
            {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }
    // cout << oddPosition << endl;

    if (oddPosition != -1 && length % 2 == 0)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    if (oddPosition == -1 && length % 2 == 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string ans;
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < letters[i] / 2; j++)
        {
            ans += (char)(i + 'A');
        }
    }
    cout << ans;
    if (oddPosition != -1)
        cout << (char)(oddPosition + 'A');
    for (int i = ans.length() - 1; i >= 0; i--)
    {
        cout << ans[i];
    }
}