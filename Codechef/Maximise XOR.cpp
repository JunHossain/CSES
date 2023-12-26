#include <iostream>
using namespace std;

int main()
{
    int t;
    int ones = 0, zeroes = 0;
    string a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        for (int i = 0; i < b.size(); i++)
        {
            if (b[i] == '0')
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
        }
        for (int j = 0; j < b.size(); j++)
        {
            do
            {
                if ((a[j] == b[j]) && a[j] = '1' && ones > 0)
                {
                    b[j] = '0';
                    zeroes--;
                }
                else if (a[j] == b[j] && a[j] = '0' && zeroes > 0)
                {
                    b[j] = '1';
                    ones--;
                }
            } while (zeroes > 0 && ones > 0);
            cout << b[j] << " ";
        }
    }
}