#include <bits/stdc++.h>
using namespace std;

void extra(int hour)
{
    if (hour < 10)
    {
        cout << "0";
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;

        int hour = stoi(str.substr(0, 2));

        if (hour < 12)
        {
            if (hour == 0)
            {
                cout << "12" << str.substr(2, 3) << " AM\n";
            }
            else
            {
                extra(hour);
                cout << hour << str.substr(2, 3) << " AM\n";
            }
        }
        else
        {
            if (hour == 12)
            {
                cout << "12" << str.substr(2, 3) << " PM\n";
            }
            else
            {
                extra(hour - 12);
                cout << hour - 12 << str.substr(2, 3) << " PM\n";
            }
        }
    }
}