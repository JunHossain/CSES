#include <iostream>

using namespace std;

int main()
{
    int n;   // amount of questions
    bool pa; // petya's ans
    bool va; // vasya's ans
    bool ta; // tonaya's ans
    int can_do = 0, right_ans = 0;

    cin >> n;

    while (n--)
    {
        cin >> pa >> va >> ta;
        if (pa == true)
            can_do++;
        if (va == true)
            can_do++;
        if (ta == true)
            can_do++;

        if (can_do > 1)
            right_ans++;
        can_do = 0;
    }

    cout << right_ans << endl;

    return 0;
}