// The code is unfinished

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int arr[8];

        for (int i = 0; i < 8; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + 8);

        int side = pow(abs(arr[0] - arr[4]), 2);

        cout << side << endl;
    }
}