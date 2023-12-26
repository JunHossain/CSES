#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t, n;

    cin >> t;
    while (t--)
    {
        int bor = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vector<int> subarray;
        sort(arr, arr + n);
        for (int j = 0; j < n; j++)
        {
            subarray.push_back(arr[j]);
        }
        for (int k = 0; k < subarray.size() - 1; k++)
        {
            bor = bor | subarray[k];
            if (k == subarray.size() - 2)
            {
                if (bor == subarray[k + 1])
                {
                    cout << subarray.size() - 1 << endl;
                }
                else if (subarray.size())
                {
                    cout << "-1" << endl;
                }
                else
                {
                    subarray.pop_back();
                    k = 0;
                    
                }
            }
        }
    }
}