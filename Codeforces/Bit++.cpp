#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x = 0;
    int n;
    string statement;
    string one = "X++";
    string two = "++X";
    string three = "X--";
    string four = "--X";

    cin >> n;

    while (n--)
    {
        cin >> statement;
        if (statement == one || statement == two)
            x = x + 1;
        /* if (statement == two)
            x + 1 = x; */
        if (statement == three || statement == three)
            x = x - 1;
        /* if (statement == four)
            x - 1 = x; */
        
    }
    cout << x << endl;
}