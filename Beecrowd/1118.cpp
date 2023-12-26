#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    double sum=0;
    int count=1;
    int restart;

    while(count<3){
        cin >> n;
        if(n<0 || n>10.0){
            cout << "nota invalida\n";
            continue;
        }
        sum=sum+n;
        count++;
        cout << fixed << setprecision(2) << "media = " << sum/2 << "\n";
        cout << "novo calculo (1-sim 2-nao)\n";
        cin >> restart;
        if(restart==2){
            break;
        }else if(restart==1){
            count=1;
        }else{
            cin >> restart;
        }
}
}
