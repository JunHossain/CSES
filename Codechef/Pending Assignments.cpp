#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int ass, comp, time;
        cin >> ass >> comp >> time;

        int total= ass*comp;
        int minute = time*24*60;

        if(total<=minute){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }

    }
}
