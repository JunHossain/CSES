#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, water;
        cin >> n >> water;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);
        int current_height=arr[n-1];
        int height;
        int need_water=0;

        for(int i=0, j=current_height; i<j; i++){
            need_water = need_water + (j-arr[i]);

            if(need_water>water){
                j--;
                continue;
            }

            /*if(i==j && need_water<=water){
                height=j-1;
            }*/

            height=j;
        }

        cout << height << "\n";
    }
}
