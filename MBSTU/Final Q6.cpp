#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        if(n==0){
            cout << "0\n";
        }else{
            cout << (n/3)+1 << "\n";
        }

    }
}
