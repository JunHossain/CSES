#include <iostream>
#include <algorithm>
using namespace std;

int solve(int fruit, int can_put, int can_blend)
{
    int original_can_put = can_put;
    int seconds = 0;

    int blended = min(can_put, can_blend);
    seconds++;
    fruit -= blended;

    while (fruit > 0)
    {
        if (can_blend < can_put)
        {
            int fruit_in_blender = can_put - can_blend;
            can_put = fruit_in_blender + (can_blend - fruit_in_blender);
        }
        else
        {
            can_put = original_can_put;
        }

        blended = min(can_put, can_blend);
        seconds++;
        fruit -= blended;
    }

    return seconds;
}

int main()
{
    int testcase;
    cin >> testcase;

    for (int x = 0; x < testcase; x++)
    {
        int fruit;
        cin >> fruit;
        int can_put, can_blend;
        cin >> can_put >> can_blend;

        cout << solve(fruit, can_put, can_blend) << endl;
    }

    return 0;
}
