#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;

        long long int ans= (n*(2+(n-1))/2);

        cout << ans << endl;
    }
}
