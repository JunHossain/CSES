#include <iostream>
using namespace std;

int main()
{
    int t, n;
    string s;
    int count = 0;
    cin >> t;
    while (t--)
    {
        cin >> n >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                count = 0;
            }
            else
            {
                count++;
            }
            if (count >= 4)
            {
                break;
            }
        }
        if (count >= 4)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        count = 0;
    }
}