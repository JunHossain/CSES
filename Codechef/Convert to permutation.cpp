#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, count;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int big = *max_element(arr, arr + n);
        int small = *min_element(arr, arr + n);
        for (int j = 0; j < n; j++)
        {
            if (big == arr[j])
            {
                count++;
            }
        }
        if ((big == n && count > n - 2) || big > n)
        {
            cout << "-1" << endl;
            count = 0;
        }
        else
        {
            cout << n - small << endl;
            count = 0;
        }
    }
}