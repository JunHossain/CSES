#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    if (n == 2 && arr[0] != n)
    {
        cout << n << endl;
        return 0;
    }
    else if (n == 2 && arr[0] == n)
    {
        cout << "1\n";
        return 0;
    }

    sort(arr, arr + n - 1);

    for (int i = 0; i < n - 2; i++)
    {
        if (arr[n - 2] != n)
        {
            cout << n << endl;
            break;
        }
        if (arr[i] + 1 != arr[i + 1])
        {
            cout << arr[i] + 1;
        }
    }
}