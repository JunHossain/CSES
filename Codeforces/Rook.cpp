#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string placement;
        cin >> placement;

        char letter = placement[0];
        short number = placement[1] - '0';
        for (int i = 97, j = 1; i <= 104; i++)
        {
            if (i == letter)
                continue;
            printf("%c%d\n", i, number);
        }
        for (int i = 1; i <= 8; i++)
        {
            if (i == number)
                continue;
            printf("%c%d\n", letter, i);
        }
    }
}