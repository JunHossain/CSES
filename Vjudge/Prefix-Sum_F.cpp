#include<bits/stdc++.h>
using namespace std;

int main(){
    long long size, t;
    cin >> size >> t;
    long long arr[size+1];
    long long memory[size+1];

    for(int i=1; i<=size; i++){
        cin >> arr[i];
    }

    memory[1]=arr[1];

    for(int i=2; i<=size; i++){
        memory[i]=memory[i-1]^arr[i];
    }

    while(t--){
        long long a, b;
        cin >> a >> b;
        if (a==1){
            cout << memory[b] << "\n";
        }else{
            cout << memory[b] - memory[a - 1] << "\n";
        }
    }
}
