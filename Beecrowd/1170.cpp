#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int count=0;
        double stock;
        cin >> stock;

        while(stock>1.0){
            stock/=2;
            count++;
        }

        cout << count << " dias\n";
    }
}
