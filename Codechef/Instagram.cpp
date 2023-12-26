#include <iostream>
using namespace std;

int main()
{
    int testcase, following, follower;
    cin >> testcase;
    while (testcase--)
    {
        cin >> following >> follower;
        if (following > follower * 10)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}