#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str;
        cin >> str;
        int length = sizeof(str);
        int uprcaseindex;
        vector<char> vec;

        for (int i = 0; i < length; i++)
        {
            vec.push_back(str[i]);
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                uprcaseindex = i;
            }

            if (str[i] == 'b')
            {
                vec.erase(i, i-1);
                vec.erase(i);
            }
        }
    }
}