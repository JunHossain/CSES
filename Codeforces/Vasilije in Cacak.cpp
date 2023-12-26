#include<bits/stdc++.h>
using namespace std;

bool solve(int n, int k, int x){
    if(x<(k*(k+1)/2)){
        return false;
    }

    if(n<k){
        return false;
    }else{
        return true;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, x;
            cin >> n >> k >> x;

        if(solve(n, k, x)){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }

}
