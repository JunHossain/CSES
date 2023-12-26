#include <iostream>
using namespace std;

int main()
{
    string name;
    int same = 0;
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        for (int j = i + 1; j < name.length(); j++)
        {
            if (name[i] == name[j] && name[i] != 'L')
            {
                same++;
                name[j] = 'L';
            }
        }
    }
    if ((name.length() - same) % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}