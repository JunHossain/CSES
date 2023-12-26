#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10];

    for(int i=0; i<10; i++){
        cin >> arr[i];

        if(arr[i]<=0){
            cout << "X[" << i << "] = 1\n";
        }else{
            cout << "X[" << i << "] = " << arr[i] << "\n";
        }
    }
}
