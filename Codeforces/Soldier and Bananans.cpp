#include <iostream>
using namespace std;

int main()
{
    int k, n, w; // k= price, n=money, w=banana
    int total_price = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
    {
        total_price = total_price + (k * i);
    }
    if (total_price - n < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << total_price - n << endl;
    }
}