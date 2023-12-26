#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n!=0){
        int sum=0;

        if(n%2!=0){
            n++;
            for(int i=1; i<=5; i++){
                sum=sum+n;
                n=n+2;
            }
        }else{
            for(int i=1; i<=5; i++){
                sum=sum+n;
                n=n+2;
            }
        }

        cout << sum << "\n";

        cin >> n;
    }
}

