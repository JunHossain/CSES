#include<iostream>
using namespace std;

int main(){
    int x;
    int alcohol=0, gasoline=0, diesel=0;

    cin >> x;

    while(x!=4){
        switch(x){
        case 1:
            alcohol++;
            break;
        case 2:
            gasoline++;
            break;
        case 3:
            diesel++;
            break;
        case 4:
            break;
        default:
            break;
        }
        cin >> x;
    }

    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcohol << "\n";
    cout << "Gasolina: " << gasoline << "\n";
    cout << "Diesel: " << diesel << "\n";

}
