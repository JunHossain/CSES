#include <bits/stdc++.h>
using namespace std;
#define ul unsigned long long

void printGray(string str, int totalDigits)
{
    string helpingString = "";
    for (int i = 0; i < totalDigits - str.length(); i++)
    {
        helpingString += "0";
    }

    str = helpingString + str;

    char mostSignificantBit = str[0];
    cout << mostSignificantBit;
    for (int i = 0; i < str.length() - 1; i++)
    {
        if (str[i] == str[i + 1])
            cout << "0";
        else
            cout << "1";
    }
    cout << endl;
}

void findBinary(int n, int totalDigits)
{
    ul remainder = 0;
    ul i = 1;
    ul binaryNumber = 0;
    while (n != 0)
    {
        remainder = n % 2;
        n /= 2;
        binaryNumber += (remainder * i);
        i *= 10;
    }

    // cout << binaryNumber << endl;
    string str = to_string(binaryNumber);
    printGray(str, totalDigits);
}

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < pow(2, n); i++)
    {
        findBinary(i, n);
    }
}