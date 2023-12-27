#include <bits/stdc++.h>
using namespace std;

int findFactorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    return factorial;
}

void findTotalCombinations(string str)
{
    vector<long long> letters(26, 0);
    for (int i = 0; i < 26; i++)
    {
        letters[str[i] - 'a']++;
    }

    int factorialOfRepetitions = 1;
    for (int i = 0; i < 26; i++)
    {
        factorialOfRepetitions *= findFactorial(letters[i]);
    }

    int totalCombinations = findFactorial(str.length()) / factorialOfRepetitions;

    cout << totalCombinations << endl;
}

int main()
{
    string str;
    cin >> str;
    findTotalCombinations(str);
    sort(str.begin(), str.end());

    do
    {
        cout << str << endl;
    } while (next_permutation(str.begin(), str.end()));
}