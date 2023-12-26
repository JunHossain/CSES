#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        short x, y;
        cin >> x >> y;

        if(x%2==0){
            x/=2;
        }else{
            x=(3*x)+1;
        }

        if(x==y){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
}
