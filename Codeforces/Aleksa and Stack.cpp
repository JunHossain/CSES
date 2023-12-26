#include<bits/stdc++.h>
using namespace std;
#define maxed *max_element(arr.begin(), arr.end())

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        if(n%2!=0){
            arr[0]=n+2;
        }else{
            arr[0]=n+1;
        }

        for(int i=1; i<n; i++){
            arr[i]= arr[i-1]+1;
        }


        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
