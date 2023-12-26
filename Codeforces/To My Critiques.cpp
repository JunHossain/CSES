#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int arr[3];
        bool yes=false;
        for(int i=0; i<3; i++){
            cin >> arr[i];
        }

        for(int i=1; i<3; i++){
            if(arr[0]+arr[i]>=10){
                yes= true;
                break;
            }

            if(!yes && arr[1]+arr[2]>=10){
                yes= true;
            }
        }

        if(yes){
            cout << "yes" << "\n";
        }else{
            cout << "no" << "\n";
        }
    }
}
