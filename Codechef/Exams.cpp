#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float school, student, passed;
        cin >> school >> student >> passed;
        float percentage = passed / (school * student) * 100;

        if (percentage > 50)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}