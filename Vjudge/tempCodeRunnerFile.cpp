#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct data
    {
        string name;
        int kickingSkill;
        int magicSkill;
        int speed;
        int demonSkill;
    };

    int n;
    cin >> n;
    data players[n];

    for (int i = 0; i < n; i++)
    {
        cin >> players[i].name >> players[i].kickingSkill >> players[i].magicSkill >> players[i].speed >> players[i].demonSkill;
    }

    sort(players, players + n, [](const data &a, const data &b)
         {
        if (a.demonSkill != b.demonSkill) {
            return a.demonSkill > b.demonSkill;
        } else if (a.magicSkill != b.magicSkill) {
            return a.magicSkill > b.magicSkill;
        } else if (a.kickingSkill != b.kickingSkill) {
            return a.kickingSkill > b.kickingSkill;
        } else if (a.speed != b.speed) {
            return a.speed > b.speed;
        } else {
            return a.name < b.name;
        } });

    for (int i = 0; i < n; i++)
    {
        cout << players[i].name << endl;
    }
}