#include <iostream>
using namespace std;

int main()
{
    int t;
    int arr[3];
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int j = 2;; j++)
        {
            if (arr[0] % j != 0 && arr[1] % j != 0 && arr[2] % j != 0)
            {
                cout << j << endl;
                break;
            }
            else
            {
                continue;
            }
        }
    }
}