#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        n = n*567;
        n = n/9;
        n = n+7492;
        n = n*235;
        n = n/47;
        n = n-498;

        int digit = (n/10)%10;

        cout << abs(digit) << "\n";
    }
}
