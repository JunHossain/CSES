#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int presentDigits = 9 - n;
        int weight[10] = {0};

        for (int i = 0; i < 10 && presentDigits != 0; i++)
        {
            weight[i] = presentDigits;
            presentDigits--;
        }

        int prod = 0;
        for (int i = 0; i < 10; i++)
        {
            prod += (weight[i] * 6);
        }

        cout << prod << endl;
    }
}