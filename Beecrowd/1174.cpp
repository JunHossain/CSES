#include<bits/stdc++.h>
using namespace std;

int main(){
    double arr[100];

    for(int i=0; i<100; i++){
        cin >> arr[i];

        if(arr[i]<=10.0){
            cout << fixed << setprecision(1) << "A[" << i << "] = " << arr[i] << "\n";
        }
    }
}
