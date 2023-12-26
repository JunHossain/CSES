#include<iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int sum=0;

    if(m>n){
        m=m^n;
        n=m^n;
        m=m^n;
    }

    for(int i=m; i<=n; i++){
        if(i<1){
            break;
        }
        cout << i << " ";
        sum= sum+i;
        if(i==n){
            cout << "Sum=" << sum << "\n";
            sum=0;
            cin >> m >> n;
            if(m==0 || n==0){
                break;
            }
            if(m>n){
                m=m^n;
                n=m^n;
                m=m^n;
            }
            i=m-1;
        }
    }
}
