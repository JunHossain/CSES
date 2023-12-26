#include <bits/stdc++.h>
using namespace std;

long long sumOf(vector<int> one, vector<int> two, int n)
{
    long long sumOne = 0, sumTwo = 0;
    for (int i = 0; i < one.size(); i++)
        sumOne += one[i];
    for (int i = 0; i < two.size(); i++)
        sumTwo += two[i];

    if (sumOne == sumTwo)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int temp = n;
    vector<int> listOne;
    vector<int> listTwo;

    if (n % 2 == 0)
    {
        int i = 1;
        int j = n;
        while (i <= n / 2)
        {

            if (i % 2 != 0)
            {
                listOne.push_back(i);
                listOne.push_back(j);
            }
            else
            {

                listTwo.push_back(i);
                listTwo.push_back(j);
            }

            i++;
            j--;
        }

        if (listOne.size() != listTwo.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << listOne.size() << endl;
            for (int k = 0; k < listOne.size(); k++)
            {
                cout << listOne[k] << " ";
            }
            cout << endl;

            cout << listTwo.size() << endl;
            for (int k = 0; k < listTwo.size(); k++)
            {
                cout << listTwo[k] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        int i = 1;
        int j = n - 1;
        while (i <= ceil(n / 2.0))
        {
            if (i == ceil(n / 2.0))
            {
                listTwo.push_back(n);
                break;
            }

            if (i % 2 != 0)
            {
                listOne.push_back(i);
                listOne.push_back(j);
            }
            else
            {

                listTwo.push_back(i);
                listTwo.push_back(j);
            }

            i++;
            j--;
        }

        if (sumOf(listOne, listTwo, n) == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << listOne.size() << endl;
            for (int k = 0; k < listOne.size(); k++)
            {
                cout << listOne[k] << " ";
            }

            cout << endl;
            cout << listTwo.size() << endl;
            for (int k = 0; k < listTwo.size(); k++)
            {
                cout << listTwo[k] << " ";
            }

            cout << endl;
        }
    }
}