#include<bits/stdc++.h>
using namespace std;

int prime(int n){
    if(n<2){
        return 0;
    }

    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }

    return 1;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(prime(n)){
            cout << n << " eh primo\n";
        }else{
            cout << n << " nao eh primo\n";
        }
    }
}
