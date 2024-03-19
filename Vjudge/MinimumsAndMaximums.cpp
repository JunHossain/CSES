#include <bits/stdc++.h>
using namespace std;

void solve(int arr[])
{
    for (int i = arr[0]; i <= arr[3]; i++)
    {
        if (i <= arr[1] && i >= arr[2])
        {
            cout << i << endl;
            return;
        }
    }

    cout << min(arr[0], arr[1]) + min(arr[2], arr[3]) << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }

        solve(arr);
    }
}