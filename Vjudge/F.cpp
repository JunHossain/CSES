#include <bits/stdc++.h>
using namespace std;

void takeinput(int maria[], int rose[], int sina[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> maria[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> rose[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> sina[i];
    }
}

int findMaxCommon(int maria[], int rose[], int sina[], int n)
{
    sort(maria, maria + n);
    sort(rose, rose + n);
    sort(sina, sina + n);

    int i = 0, j = 0, k = 0;

    int maxCommon = -1;

    while (i < n && j < n && k < n)
    {
        if (maria[i] == rose[j] && rose[j] == sina[k])
        {
            maxCommon = maria[i];
            i++;
            j++;
            k++;
        }
        else if (maria[i] < rose[j])
        {
            i++;
        }
        else if (rose[j] < sina[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }

    return maxCommon;
}

int main()
{
    int n;
    cin >> n;
    int maria[n];
    int rose[n];
    int sina[n];

    takeinput(maria, rose, sina, n);

    int maxCommon = findMaxCommon(maria, rose, sina, n);

    if (maxCommon == -1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << maxCommon << endl;
    }
}