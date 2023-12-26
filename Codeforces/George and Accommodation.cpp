#include <iostream>
using namespace std;

int main()
{
    int testcase, filled, free;
    int count = 0;
    cin >> testcase;
    while (testcase--)
    {
        cin >> filled >> free;
        if (free - filled > 1)
        {
            count++;
        }
    }
    cout << count << endl;
}