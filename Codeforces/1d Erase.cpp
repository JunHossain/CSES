#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int count = 0;

        for(int i=0; i<n; i++){
            if(str[i]=='B'){
                count++;
                i=i+k-1;
            }
        }

        cout << count << "\n";
    }
}
