#include <iostream>
using namespace std;
int main()
{
    int num;
    int digit[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    string month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cin >> num;
    for (int i = 0; i < 12; i++)
    {
        if (num == digit[i])
        {
            cout << month[i] << endl;
        }
    }
    return 0;
}