#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long int arr[3];

        for(int i=0; i<3; i++){
            cin >> arr[i];
        }

        sort(arr, arr+3);
        int flag=1;

        for(int i=1; i<3; i++){
            if(arr[i]>arr[0]*3 || arr[i]%arr[0]!=0){
                flag=0;
            }
        }

        if(flag){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
