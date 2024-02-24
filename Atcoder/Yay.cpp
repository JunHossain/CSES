#include <bits/stdc++.h>
using namespace std;

char findUniqueLetter(string str)
{
    if (str[0] == str[1])
    {
        return str[str.size() - 1];
    }
    else
    {
        return str[0];
    }
}

int main()
{
    string str, copiedStr;
    cin >> str;
    copiedStr = str;
    sort(copiedStr.begin(), copiedStr.end());

    char uniqueLetter = findUniqueLetter(copiedStr);

    for (int i = 0; i < str.size(); i++)
    {
        if (uniqueLetter == str[i])
        {
            cout << i + 1 << endl;
            break;
        }
    }
}