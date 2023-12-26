#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    int anton = 0, danik = 0;
    cin >> str;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'A')
        {
            anton++;
        }
        if (str[i] == 'D')
        {
            danik++;
        }
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}