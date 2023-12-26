#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string arr;
        char binaryArray[n];

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                binaryArray[i] = '1';
            }
            else
            {
                binaryArray[i] = '0';
            }
        }

        cin >> arr;

        for (int i = 0; i < n; i++)
        {
            char temp = ' ';
            char num;
            if (i % 2 == 0)
            {
                num = '1';
            }
            else
            {
                num = '0';
            }
            if (arr[i] >= 'a' && arr[i] <= 'z')
            {
                temp = arr[i];
            }

            for (int j = i; j < n; j++)
            {
                if (temp == arr[j])
                {
                    arr[j] = num;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}