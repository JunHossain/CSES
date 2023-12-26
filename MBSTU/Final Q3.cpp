#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;
        long long int arr[n];
        long long int count=0;

        for(long long int i=0; i<n; i++){
            cin >> arr[i];

            if(arr[i]>=40){
                count++;
            }
        }

        cout << count << "\n";

    }
}
