#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int length, query;
        cin >> length >> query;
        int arr[length];
        int rangeSum[length];
        int totalSum = 0;

        for (int i = 0; i < length; i++)
        {
            cin >> arr[i];
            totalSum += arr[i];
            rangeSum[i] = totalSum;
        }

        for (int i = 0; i < query; i++)
        {
            int sum = 0;
            int start, end, num;
            cin >> start >> end >> num;

            int tempSum = ((end - start) + 1) * num;

            sum = rangeSum[end - 1] - rangeSum[start - 2];

            int change = tempSum - sum;

            if ((totalSum + change) % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}