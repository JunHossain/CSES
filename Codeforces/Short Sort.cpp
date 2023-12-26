#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string abc;
        cin >> abc;

        if(abc[0]=='a'){
            cout << "Yes\n";
        }else if(abc[0]=='b' && abc[1]=='a'){
            cout << "Yes\n";
        }else if(abc[0]=='c' && abc[1]=='b'){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }

    }
}
