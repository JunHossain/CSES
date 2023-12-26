#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int total, people;
        cin >> total >> people;

        int perPerson = total / (people + 1);
        int totalPaid = perPerson * people;
        cout << total - totalPaid << endl;
    }
}