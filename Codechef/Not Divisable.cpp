#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/* int subs(int a, int b){
    for(int k=0; k<n; k++)
} */

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            vector<int> subtraction;
            subtraction.reserve(500);
            for (int j = 1; j < n; j++)
            {
                int x, y;
                x = arr[i] - arr[j];
                subtraction.push_back(abs(x));
            }
            cout << subtraction[i] << " ";
        }
    }
}