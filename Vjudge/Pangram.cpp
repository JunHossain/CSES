#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string str;
    cin >> str;

    if (n < 26)
    {
        cout << "NO" << endl;
        return 0;
    }

    for (auto &c : str)
    {
        c = tolower(c);
    }

    vector<int> alphabets(26, 0);

    for (int i = 0; i < str.size(); i++)
    {
        alphabets[str[i] - 'a']++;
    }

    if (find(alphabets.begin(), alphabets.end(), 0) != alphabets.end())
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}