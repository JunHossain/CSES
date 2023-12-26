#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[6];
        bool found = false;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
        }
        if (arr[2] == arr[0])
        {
            if (arr[2 + 1] == arr[1])
            {
                cout << "1" << endl;
                found = true;
            }
        }
        if (arr[2] == arr[1])
        {
            if (arr[2 + 1] == arr[0])
            {
                cout << "1" << endl;
                found = true;
            }
        }
        if (arr[4] == arr[0])
        {
            if (arr[4 + 1] == arr[0])
            {
                cout << "2" << endl;
                found = true;
            }
        }
        if (arr[4] == arr[1])
        {
            if (arr[4 + 1] == arr[0])
            {
                cout << "2" << endl;
                found = true;
            }
        }
        if (found == false)
        {
            cout << "0" << endl;
        }
    }
}