#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    char letterArray[26];

    for (int i = 0; i < 26; i++)
    {
        letterArray[i] = 'A' + i;
    }

    while (t--)
    {
        int n;
        string str;
        cin >> n >> str;
        int answer = 0;

        sort(str.begin(), str.end());

        for (int i = 0; i < str.size(); i++)
        {

            int count = 1;
            char currentLetter = str[i];
            int j = i + 1;
            while (j < str.size() && str[i] == str[j])
            {
                count++;
                j++;
            }

            i = j;

            for (int k = 0; k < 26; k++)
            {
                if (currentLetter == letterArray[k])
                {
                    if (count >= k + 1)
                    {
                        answer++;
                    }
                }
            }
        }
        cout << answer << endl;
    }
}
