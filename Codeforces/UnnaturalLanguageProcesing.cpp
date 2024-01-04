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
        string str;
        cin >> str;

        char letters[5] = {'a', 'b', 'c', 'd', 'e'};

        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == 'b' || str[i] == 'c' || str[i] == 'd')
            {
                if (str[i + 3] == 'b' || str[i + 3] == 'c' || str[i + 3] == 'd')
                {
                    cout << str[i] << str[i + 1] << str[i + 2] << '.';
                }
            }
            i += 3;
        }

        cout << str[n - 3] << str[n - 2] << str[n - 1] << endl;
    }
}