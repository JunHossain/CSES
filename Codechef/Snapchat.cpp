#include <iostream>
using namespace std;

int main()
{
    int testcase, day, temp_count, count;
    cin >> testcase;
    while (testcase--)
    {
        temp_count = 0;
        count = 0;
        cin >> day;
        int chef[day], chefina[day];
        for (int i = 0; i < day; i++)
        {
            cin >> chef[i];
        }
        for (int j = 0; j < day; j++)
        {
            cin >> chefina[j];
        }
        for (int k = 0; k < day; k++)
        {
            if (chef[k] > 0 && chefina[k] > 0)
            {
                temp_count++;
                if (temp_count > count)
                {
                    count = temp_count;
                }
            }
            else
            {
                // count = temp_count;
                temp_count = 0;
            }
        }
        cout << count << endl;
    }
}