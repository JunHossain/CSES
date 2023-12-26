#include<iostream>

using namespace std;

int main(){

    int a, b, c, d;
    int hour= 24;
    int minute= 60;
    int rh, rm;

    cin >> a >> b >> c >> d;

    if(a>c || a==c){
        rh= hour-a+c;
    } else if(a < c){
        rh= c-a-1;
    }

    if(b>d){
        rm= d-b;
    } else if(b==d){
        rm= 0;
    } else{
        rm= (minute+d)-b;
    }

    cout << "O JOGO DUROU " << rh << " HORA(S) E " << rm << " MINUTO(S)" << endl;

}
