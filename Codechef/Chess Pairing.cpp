#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int players, rated;
        cin >> players >> rated;

        if(rated==0 || rated<=players){
            cout << "0\n";
        }else if(rated==2*players){
            cout << rated << endl;
        }else if(rated>players){
            cout << rated-(2*players-rated) << endl;
        }
    }
}
