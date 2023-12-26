// The code is not yet finished

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numberofDisks;
    cin >> numberofDisks;
    int ans = (numberofDisks - 1) * 2 + 1;
    cout << ans << endl;

    for (int i = 0; i < (ans - 1) / 2; i++)
    {
        cout << "1 2" << endl;
    }

    cout << "1 3" << endl;

    for (int i = 0; i < (ans - 1) / 2; i++)
    {
        cout << "2 3" << endl;
    }
}