#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        long long int len=str.length();
        for(long long int i=len-1; i>=0; i--){
            cout << str[i] << " ";
        }

        cout << endl;
    }
}
