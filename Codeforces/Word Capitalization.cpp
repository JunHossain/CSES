#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string word;
    cin >> word;
    char first_word = toupper(word[0]);

    cout << first_word;
    for (int i = 1; i < word.length(); i++)
    {
        cout << word[i];
    }
}