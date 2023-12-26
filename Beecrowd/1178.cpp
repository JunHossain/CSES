#include<bits/stdc++.h>
using namespace std;

int main(){
    double n;
    cin >> n;
    cout << "N[0] = " << fixed << setprecision(4) << n << "\n";

    for(int i =1; i<100; i++){
        n=n/2;
        cout << "N[" << i << "] = " << fixed << setprecision(4) << n << "\n";
    }
}
