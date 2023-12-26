#include<bits/stdc++.h>
using namespace std;

int main(){
    double sum=1;
    double i=3; double j=2;

    for(; i<=39; i+=2, j*=2){
        sum= sum+ (i/j);
    }

    cout << fixed << setprecision(2) << sum << endl;
}
