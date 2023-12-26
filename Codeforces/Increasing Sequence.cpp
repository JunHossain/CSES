#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        vector<int> arrb(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
            arrb[i]=0;
        }

        if(arr[0]==1){
            arrb[0]=2;
        }else{
            arrb[0]=1;
        }

        for(int i=1; i<n; i++){
            arrb[i]= arrb[i-1] + 1;
            if(arr[i]==arrb[i]){
                arrb[i]+=1;
            }
        }

        cout << arrb.back() << "\n";
    }
}
