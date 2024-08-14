#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string number = to_string(n);
        string firstTwoDigits = number.substr(0, 2);
        string restOfTheDigits = number.substr(2);

        if (stoi(firstTwoDigits) != 10)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (stoi(restOfTheDigits) < 2)
        {
            cout << "NO" << endl;
            continue;
        }
        else if (stoi(restOfTheDigits.substr(0, 1)) == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}