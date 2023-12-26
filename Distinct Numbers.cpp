#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    int count=0;

    while(!arr.empty()){
        int same=arr[0];
        count++;
        arr.erase(arr.begin());
        for(int i=1; i<arr.size(); i++){
            if(same==arr[i]){
                arr.erase(arr.begin()+1);
            }else{
                break;
            }
        }
    }

    cout << count << "\n";
}
