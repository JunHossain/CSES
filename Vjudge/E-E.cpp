#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum = 0, temp;
    for (int i = 0; i < 10000000; i++)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                sum = sum + pow(j, 2);
                cout << sum << endl;
            }
        }
        // cout << sum << endl;
    }
}
