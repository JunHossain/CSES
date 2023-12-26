#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;
        int c = abs(a-b);
        cout << c;
        int arr[c+1];

        for(int i=a; i<=b; i++){
            arr[i]=1;
        }

        for(int i=a; i<=b; i++){
            if(arr[i]==1){
                for(int j=i*i; j<=b; j+=i){
                    arr[j]=0;
                }
            }
        }

        for(int i=a; i<=b; i++){
            if(arr[i]==1){
                cout << i << " ";
            }
        }

        cout << endl;
    }
}
