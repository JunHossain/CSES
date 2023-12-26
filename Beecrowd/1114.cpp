#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    do{
        if(n!=2002){
            cout << "Senha Invalida\n";
        }else{
            cout << "Acesso Permitido\n";
        }

        cin >> n;
    }while(n!=2002);

    cout << "Acesso Permitido\n";
}
