#include<bits/stdc++.h>
using namespace std;

int distinct(int arr[], int n){
    int different=0;

    for (int i = 0; i < n; i++) {
        while (i < n - 1 && arr[i] == arr[i + 1]){
            i++;
        }

        different++;
    }

    return different;
}

int frequency(int arr[], int n){
    multiset <int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    auto it1 = s.begin();
    int x = s.count(*it1);

    auto it2 = s.end();
    it--;
    int y = s.count(*it2);

    if(abs(x-y)==0 || abs(x-y)==1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr, arr+n);
        int different= distinct(arr, n);

        if(different==1){
            cout << "Yes\n";
        }else if(different!=2){
            cout << "No\n";
        }else{
            int freq= frequency(arr, n);
            if(freq){
                cout << "Yes\n";
            }else{
                cout << "No\n";
            }
        }
    }
}
