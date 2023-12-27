#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int width, height, rupees;
        cin >> width >> height >> rupees;

        int area = width * height;
        int canPaint = rupees / 2;

        cout << canPaint / area << endl;
    }
}