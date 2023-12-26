#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int sum=0;

        if(a%2!=0){
            for(int i=1; i<=b; i++){
                sum=sum+a;
                a=a+2;
            }
        }else{
            a++;
            for(int i=1; i<=b; i++){
                sum=sum+a;
                a=a+2;
            }
        }

        cout << sum << "\n";
    }
}
