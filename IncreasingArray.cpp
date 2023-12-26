#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int currentNumber = arr[0];
    long long count = 0;

    for (int i : arr)
    {
        if (currentNumber > i)
        {
            count += currentNumber - i;
        }
        else
        {
            currentNumber = i;
        }
    }

    cout << count << endl;
}