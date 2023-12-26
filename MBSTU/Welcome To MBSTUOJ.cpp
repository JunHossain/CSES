#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;
        str[0] = toupper(str[0]);

        cout << "Welcome " << str << "\n";
    }
}
