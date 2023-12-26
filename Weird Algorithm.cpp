#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    cout << n << " ";
    for (long long i = 0; i < 700000; i++)
    {
        if (n == 1)
        {
            // return 1;
            break;
        }
        else if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (n * 3) + 1;
        }
        cout << n << " ";
    }
}