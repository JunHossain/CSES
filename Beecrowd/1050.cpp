#include <iostream>
using namespace std;
int main()
{
    int num, check = 0;
    int digit[8] = {61, 71, 11, 21, 32, 19, 27, 31};
    string place[8] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
    cin >> num;
    for (int i = 0; i < 8; i++)
    {
        if (num == digit[i])
        {
            cout << place[i] << endl;
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << "DDD nao cadastrado" << endl;
    }

    return 0;
}
