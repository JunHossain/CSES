#include <iostream>
using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;

        for (int i = 2; i < 100000; i++)
        {
            if (a == 1 || b == 1)
            {
                cout << "1" << endl;
                break;
            }
            if (a % i == 0 && b % i == 0)
            {
                cout << i << endl;
                break;
            }
        }
    }
}