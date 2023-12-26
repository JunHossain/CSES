#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a, b;
    int sum = 0;

    while(t--){
        cin >> a >> b;

        if(a>b){
            a=a^b;
            b=a^b;
            a=a^b;
        }

        for(int i=a+1; i<b; i++){
            if(i%2!=0){
                sum=sum+i;
            }
        }
        cout << sum << "\n";
        sum = 0;
    }
}
