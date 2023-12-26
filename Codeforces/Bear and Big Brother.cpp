#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = 0; i < 10000; i++)
    {
        a = a * 3;
        b = b * 2;
        count++;
        if (a > b)
        {
            break;
        }
    }
    cout << count;
}