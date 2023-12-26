#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int l, r, m;

    while(t--){
        cin >> l >> r >> m;
        int start=0;
        int pages= m/l;
        if(m%l!=0)start++;

        int code= m/r;
        cout << pages+code+start << "\n";
    }
}
