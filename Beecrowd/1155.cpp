#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum=0;

    for(double i=1; i<=100; i++){
        sum= sum+(1/i);
    }

    cout << fixed << setprecision(2) << sum << endl;
}
