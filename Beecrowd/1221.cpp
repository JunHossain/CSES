#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n<2){
            cout << "Not Prime\n";
            continue;
        }

        bool prime=true;

        for(int i=2; i<=sqrt(n); i++){
            if(n%i==0){
                prime=false;
                break;
            }
        }

        if(prime){
            cout << "Prime\n";
        }else{
            cout << "Not Prime\n";
        }
    }
}
