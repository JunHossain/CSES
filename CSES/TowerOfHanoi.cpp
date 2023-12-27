// The code is not yet finished

#include <bits/stdc++.h>
using namespace std;

int optimalSolution(int numberofDisks)
{
    return pow(2, numberofDisks) - 1;
}

int main()
{
    int numberofDisks;
    cin >> numberofDisks;
    cout << optimalSolution(numberofDisks) << endl;
}