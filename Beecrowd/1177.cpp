#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0, j=0; i<1000; i++, j++){
        cout << "N[" << i << "] = " << j << "\n";

        if(j==n-1) j=-1;
    }
}
