// https://www.youtube.com/watch?v=rf6uf3jNjbo
// I understand each and everything except the
// recursion visualization :"(

#include <bits/stdc++.h>
using namespace std;

void hanoi(int numberofDisks, int start, int end)
{
    if (numberofDisks == 1)
        cout << start << " " << end << endl;
    else
    {
        int middle = 6 - (start + end);
        hanoi(numberofDisks - 1, start, middle);
        cout << start << " " << end << endl;
        hanoi(numberofDisks - 1, middle, end);
    }
}

int optimalSolution(int numberofDisks)
{
    return pow(2, numberofDisks) - 1;
}

int main()
{
    int numberofDisks;
    cin >> numberofDisks;
    cout << optimalSolution(numberofDisks) << endl;
    hanoi(numberofDisks, 1, 3); // start = 1, end = 3
}