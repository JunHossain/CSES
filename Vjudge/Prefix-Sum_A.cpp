#include<bits/stdc++.h>
using namespace std;

int main(){
    long long size, t;
    cin >> size >> t;
    long long arr[size];
    long long memory[size];
    long long sum=0;

    for(int i=0; i<size; i++){
        cin >> arr[i];
        sum=sum+arr[i];
        memory[i]=sum;
    }

    while(t--){
        long long a, b;
        cin >> a >> b;
        if (a == 1) {
            cout << memory[b - 1] << "\n";
        } else {
            cout << memory[b - 1] - memory[a - 2] << "\n";
        }
    }
}
