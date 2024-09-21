#include <bits/stdc++.h>
using namespace std;

int calculate_unhappy_people(int arr[], int population, int average)
{
    int unhappy_people = 0;
    for (int i = 0; i < population; i++)
    {
        if (arr[i] < average)
        {
            unhappy_people++;
        }
    }
    return unhappy_people;
}

int main()
{
    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int population;
        cin >> population;
        int max = 0;
        int sum = 0;
        int arr[population];

        for (int i = 0; i < population; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
        }

        int average = sum / population;
        int unhappy_people = calculate_unhappy_people(arr, population, average);
        
    }
}