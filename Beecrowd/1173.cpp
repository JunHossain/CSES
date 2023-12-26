#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<10; i++){
        if(i==0){
            cout << "N[0] = " << n << "\n";
        }else{
            n=n*2;
            cout << "N[" << i << "] = " << n << "\n";
        }
    }
}
