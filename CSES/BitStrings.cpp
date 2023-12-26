#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
    int n;
    cin >> n;
    int answer = 1;

    for (int i = 1; i <= n; i++)
    {
        answer *= 2;
        answer %= mod;
    }

    cout << answer << endl;
}