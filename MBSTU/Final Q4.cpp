#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long int t;
    cin >> t;

    while(t--){
        long long int n;
        cin >> n;

        long long int arr[n];

        for(long long int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i]<0){
                arr[i]=9;
            }
        }

        reverse(arr, arr+n);

        for(long long int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
