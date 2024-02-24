#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int searchValue)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == searchValue)
        {
            return i;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int query;
    cin >> query;
    while (query--)
    {
        int a, b;
        cin >> a >> b;

        int athPosition = linearSearch(arr, n, a);
        int bthPosition = linearSearch(arr, n, b);

        if (athPosition < bthPosition)
        {
            cout << arr[athPosition] << endl;
        }
        else
        {
            cout << arr[bthPosition] << endl;
        }
    }
}