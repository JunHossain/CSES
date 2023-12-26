#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    double sum=0;
    int count=1;

    while(count<3){
        cin >> n;
        if(n<0 || n>10.0){
            cout << "nota invalida\n";
            continue;
        }
        sum=sum+n;
        count++;
    }

    cout << fixed << setprecision(2) << "media = " << sum/2 << "\n";
}
