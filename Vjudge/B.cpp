#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, d;
    cin >> n >> a >> b >> d;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] + d >= a && arr[i] - d <= b)
        {
            cout << i << " ";
        }
    }
}