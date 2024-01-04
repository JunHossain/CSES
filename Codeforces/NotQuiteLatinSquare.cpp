#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char arr[3][3];
        int row;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '?')
                {
                    row = i;
                }
            }
        }

        cout << (char)((261 - (int)((arr[row][0] + arr[row][1]) + arr[row][2]))) << endl;
    }
}