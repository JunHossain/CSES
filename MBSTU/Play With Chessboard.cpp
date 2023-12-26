#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if(abs(a-c)==abs(b-d)){
            cout << "1\n";
        }else{
            cout << "0\n";
        }
    }
}
