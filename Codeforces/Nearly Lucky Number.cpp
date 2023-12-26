#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    for (int i; i < n.length(); i++)
    {
        if ((n[i] != '4' && n[i] != '7') || n.length() <= 1)
        {
            cout << "NO";
            n = 'x';
        }else{
            cout << "YES";
            break;
        }
    }
    return 0;
}