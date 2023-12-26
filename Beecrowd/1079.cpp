#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double a, b, c;
    double weight_sum=10;
    double partial_avg;
    cin >> n;

    while(n--){
        cin >> a >> b >> c;
        partial_avg = (a*2)+(b*3)+(c*5);
        cout << fixed << setprecision(1) << partial_avg/weight_sum << "\n";
    }
}
