#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;

    char currentCharacter = '\0';
    int temp = 1, streak = 0;

    for (char c : str)
    {
        if (c == currentCharacter)
            temp++;
        else
        {
            currentCharacter = c;
            temp = 1;
        }

        if (temp > streak)
        {
            streak = temp;
        }
    }

    cout << streak << endl;
}