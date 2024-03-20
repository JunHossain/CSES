#include <bits/stdc++.h>
using namespace std;

void printversion1(string arr, int index, char dToChar)
{
    for (int i = 0; i < index; i++)
    {
        cout << arr[i];
    }
    cout << dToChar;
    for (int i = index; i < arr.size(); i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d;
        cin >> n >> d;
        char dToChar = d + '0';
        string arr;
        int index = 1;

        cin >> arr;

        if (dToChar == '0')
        {
            cout << arr << dToChar << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= dToChar)
            {
                index = i;
                break;
            }
        }

        if (index != 0)
        {
            printversion1(arr, index, dToChar);
        }
        else
        {
            cout << dToChar << arr << endl;
        }
    }
}