#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int t2;
        cin >> t2;
        int temp = t2;
        int max_limit;

        int arr[temp][2];

        for(int i = 0; i < temp; i++){
            for(int j = 0; j < 2; j++){
                cin >> arr[i][j];
            }
        }

        max_limit = arr[0][0];
        int k, l;
        bool possible = true;

        for(k = 1, l = 0; k < temp; k++){
            if(max_limit <= arr[k][l]){
                if(arr[0][1] <= arr[k][l+1]){
                    possible = false;
                    break;
                }
            }
        }

        if(possible){
            cout << max_limit << "\n";
        } else {
            cout << "-1\n";
        }
    }
}
