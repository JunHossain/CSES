#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n){
        for(int i=1; i<=n; i++){
            cout << i;
            if(i<n) cout << " ";
        }
        cout << "\n";
        cin >> n;
    }
}
