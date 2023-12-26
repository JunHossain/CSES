#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int arr[100];
    int count = 0;

    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            arr[count++] = s[i] - '0';
        }
    }
    sort(arr, arr + count);
    for (int j = 0; j < count; j++)
    {
        cout << arr[j];
        if (j == count - 1)
        {
            break;
        }
        cout << "+";
    }
}