#include <iostream>
using namespace std;

int main()
{
    int t, x, y, k;
    int count = 0;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> k;
        if (x == y)
        {
            cout << "0" << endl;
        }
        else if (x < y)
        {
            do
            {
                x = x + k;
                count++;
            } while (x < y);
            cout << count << endl;
            count = 0;
        }
        else
        {
            do
            {
                x = x - k;
                count++;
            } while (x > y);
            cout << count << endl;
            count = 0;
        }
    }
}