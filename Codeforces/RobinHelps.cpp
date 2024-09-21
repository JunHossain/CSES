#include <bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int people, max_gold;
        cin >> people >> max_gold;

        int gold[people];
        int zero_gold_people = 0;
        int robin_has = 0;
        int robin_gave = 0;
        for (int i = 0; i < people; i++)
        {
            cin >> gold[i];
            if (gold[i] == 0 && robin_has > 0)
            {
                robin_has--;
                robin_gave++;
            }
            else if (gold[i] >= max_gold)
            {
                robin_has += gold[i];
            }

            if (robin_has < 0)
            {
                robin_has = 0;
            }
        }

        cout << robin_gave << endl;
    }
}