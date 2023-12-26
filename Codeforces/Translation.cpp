#include <iostream>
using namespace std;

int main()
{
    string berlandish, birlandish;
    int ber = 0, bir = 0;
    int n;
    cin >> berlandish >> birlandish;
    n = berlandish.length();
    for (int i = 0; i < berlandish.length(); i++)
    {
        if (berlandish[i] == birlandish[n - (i + 1)])
            bir++;
    }
    if (bir == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}