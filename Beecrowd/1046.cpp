#include<iostream>

using namespace std;

int main(){

    int a, b, result;
    int time=24;

    cin >> a >> b;

    if(a>b || a==b){
        result= time-a+b;
        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;
    } else if(a < b){
        result= b-a;
        cout << "O JOGO DUROU " << result << " HORA(S)" << endl;
    }

}
