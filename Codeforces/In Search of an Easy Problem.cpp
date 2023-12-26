#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int input[n];
    bool check;
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (input[j] == 1)
        {
            check = 1;
        }
    }
    if (check==1)
    {
        cout << "HARD" << endl;
    }
    else
    {
        cout << "EASY" << endl;
    }
}