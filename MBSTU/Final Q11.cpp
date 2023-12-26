#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        long long int arr[n];

        for(long long int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);

        for(long long int i=0; i<n; i++){
            cout << arr[i] << " ";
        }

        cout << endl;
    }
}
