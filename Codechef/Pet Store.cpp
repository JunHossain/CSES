#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t, a, input;
    cin >> t;
    while (t--)
    {
        cin >> a;
        int animal[a];
        for (int i = 0; i < a; i++)
        {
            cin >> animal[i];
        }
        int len = sizeof(animal)/sizeof(animal[0]);
        sort(animal, animal + len);
        for (int j = 0; j < a; j++)
        {
            cout << animal[j] << " ";
        }

        /* code */
    }
}