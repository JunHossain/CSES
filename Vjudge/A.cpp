#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        str[i] = toupper(str[i]);
    }

    string be = "BE";

    if (str.find(be) != string::npos)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}