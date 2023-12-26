#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int count=0;
    double sum=0;

    cin >> n;

    while(n>=0){
        sum=sum+n;
        count++;
        cin >> n;
    }

    cout << fixed << setprecision(2) << sum/count << endl;
}
