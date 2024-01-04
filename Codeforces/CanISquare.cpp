#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long t;
    cin >> t;

    while (t--)
    {
        unsigned long long buckets;
        cin >> buckets;
        unsigned long long arr[buckets];
        unsigned long long sum = 0;

        for (unsigned long long i = 0; i < buckets; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        unsigned long long root = sqrt(sum);
        if (root * root == sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}