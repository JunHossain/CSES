#include <bits/stdc++.h>
using namespace std;

void rotateRight(int arr[], int n, int k)
{
    reverse(arr, arr + n);
    reverse(arr, arr + k + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }

        rotateRight(arr, n, k);

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
}