// This code is unfinished

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum % 2 != 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}