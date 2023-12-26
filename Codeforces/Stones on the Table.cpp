#include <iostream>
using namespace std;

int main()
{
    int n, matching_letter = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i <= s[n - 1]; i++)
    {
        if (s[i] == s[i + 1])
        {
            matching_letter++;
        }
    }
    cout << matching_letter;
}