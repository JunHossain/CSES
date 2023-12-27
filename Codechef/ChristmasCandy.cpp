// This code is unfinished

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int numberOfFriends;
        cin >> numberOfFriends;
        int arr[numberOfFriends];

        for (int i = 0; i < numberOfFriends; i++)
        {
            cin >> arr[i];
        }

        int small = arr[1];
        int currentIndex = 1;
        int count = 0;

        for (int i = 0, j = 0; i < currentIndex && currentIndex < numberOfFriends; i++, currentIndex++)
        {
            if (small < arr[j])
            {
                count++;
                j++;
                small = arr[currentIndex];
                continue;
            }
        }

        cout << count << endl;
    }
}