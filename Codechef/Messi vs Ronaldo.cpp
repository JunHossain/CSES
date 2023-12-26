#include<iostream>
using namespace std;

int main(){
    int a, b, x, y;
    int messi, ronaldo;

    cin >> a >> b >> x >> y;

    messi = a*2+b;
    ronaldo = x*2+y;

    //cout << messi << " " << ronaldo;

    if(messi<ronaldo){
        cout << "Ronaldo";
    }else if(messi==ronaldo){
        cout << "Equal";
    }else{
        cout << "Messi";
    }
}
