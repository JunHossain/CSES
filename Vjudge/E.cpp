// The code is not finished

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int distinctDish = n / k;
    long long finalSum = 0;
    long long tempSum = 0;

    for (int i = 0; i < n; i += distinctDish)
    {
        while (distinctDish--)
        {
            tempSum = arr[i] + arr[i + 1] + max(arr[i + 1], arr[i]);
        }
        distinctDish = n / k;
        finalSum += tempSum;
    }

    cout << finalSum << endl;
}