#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long arr[n];
    long long memory[n];
    long long sum=0;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        sum=sum+arr[i];
        memory[i]=sum;
    }

    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if(a==0){
            cout << memory[b] << "\n";
        }else{
            cout << memory[b]-memory[a-1] << "\n";
        }

    }
}
