#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        unsigned long long int n;
        cin >> n;

        unsigned long long int edge = n*n;
        unsigned long long int inside = ((n-4)*2)+10;
        cout << edge+inside << "\n";
    }
}
