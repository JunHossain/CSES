#include <bits/stdc++.h>
using namespace std;

void subsets(int arr[], int n, long long totalSum)
{
    long long int difference = LONG_LONG_MAX;
    long long int minimumDifference = LONG_LONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        long long int subsetSum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                subsetSum += arr[j];
            }
        }
        long long secondSubsetSum = abs(totalSum - subsetSum);

        difference = min(difference, abs(subsetSum - secondSubsetSum));

        if (difference < minimumDifference)
        {
            minimumDifference = difference;
        }
    }

    cout << minimumDifference << endl;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int totalSum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        totalSum += arr[i];
    }

    if (n == 1)
    {
        cout << arr[0] << endl;
        return 0;
    }

    subsets(arr, n, totalSum);
}