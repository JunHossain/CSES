#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        vector<int> a;
        a.reserve(10);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[j] <= k)
            {
                k = k - arr[j];
                a.push_back(1);
            }
            else
            {
                a.push_back(0);
            }
        }
        for (int k = 0; k < a.size(); k++)
        {
            cout << a[k];
        }
        cout << endl;
        a.clear();
    }
}