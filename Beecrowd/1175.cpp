#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[20];

    for(int i=0; i<20; i++){
        cin >> arr[i];
    }

    int i, j;

    for(i=0, j=19; i<20; i++, j--){
        cout << "N[" << i << "] = " << arr[j] << "\n";
    }
}
