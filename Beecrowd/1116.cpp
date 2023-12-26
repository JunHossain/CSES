#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    int x, y;
    double ans;

    while(t--){
        cin >> x >> y;
        if(y==0){
            cout << "divisao impossivel\n";
            continue;
        }
        ans = (double)x/y;
        cout << fixed << setprecision(1) << ans << "\n";

    }
}
