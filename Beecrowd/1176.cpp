#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int t;
    cin >> t;
    unsigned long long int arr[61];
    unsigned long long int sum=0;

    arr[0]=0;
    arr[1]=1;
    unsigned long long int first= 0;
    unsigned long long int second = 1;

    for(int i=2; i<61; i++){
        arr[i]= first+second;
        first=second;
        second=arr[i];
    }

    while(t--){
        int n;
        cin >> n;
        cout << "Fib(" << n << ") = " << arr[n] << "\n";
    }
}
