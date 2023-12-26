#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int x, y, k;
        cin >> x >> y >> k;

        if(y<=x){
            cout << x << "\n";
        }else{
            int difference;
            difference= y-x;

            if(difference<=k){
                cout << y << "\n";
            }else{
                int extra;
                extra= difference-k;
                extra+=extra;
                cout << x+k+extra << "\n";
            }
        }
    }
}
