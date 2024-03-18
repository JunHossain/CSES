#include <bits/stdc++.h>
using namespace std;

bool checkIfRankMatches(string str, char arr[])
{
    for (int i = 0; i < 10; i += 2)
    {
        if (str[0] == arr[i])
        {
            return true;
        }
    }
    return false;
}

bool checkIfSuitMatches(string str, char arr[])
{
    for (int i = 1; i < 10; i += 2)
    {
        if (str[1] == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    string str;
    cin >> str;
    char arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    int flag = 0;
    if (checkIfRankMatches(str, arr))
    {
        cout << "YES" << endl;
        return 0;
    }
    else if (checkIfSuitMatches(str, arr))
    {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
}