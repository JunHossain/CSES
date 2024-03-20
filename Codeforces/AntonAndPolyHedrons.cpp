#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string arr[n];
    int sum = 0;

    for (string i : arr)
    {
        cin >> i;
        if (i == "Tetrahedron")
        {
            sum += 4;
        }
        else if (i == "Cube")
        {
            sum += 6;
        }
        else if (i == "Octahedron")
        {
            sum += 8;
        }
        else if (i == "Dodecahedron")
        {
            sum += 12;
        }
        else if (i == "Icosahedron")
        {
            sum += 20;
        }
    }

    cout << sum << endl;
}