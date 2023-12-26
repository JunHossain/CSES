#include <iostream>
using namespace std;

int main()
{
    int n, first_bracket = 0, second_bracket = 0;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '<')
            {
                first_bracket++;
            }
            if (s[i] == '>' && first_bracket > 0)
            {
                first_bracket--;
                second_bracket++;
            }
            if (s[i] == '.')
            {
                continue;
            }
        }
        cout << second_bracket << endl;
        first_bracket = 0;
        second_bracket = 0;
    }
}