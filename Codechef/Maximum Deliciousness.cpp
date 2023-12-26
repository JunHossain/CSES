#include<bits/stdc++.h>
using namespace std;

vector<int> cakes(int n, int k, int l){
    vector<int> indices;
    int turn=l;
    while(turn<=n){
        indices.push_back(turn);
        turn = turn+k;
    }

    return indices;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k, l;
        cin >> n >> k >> l;
        int deliciousness[n];
        int sum=0;

        for(int i=0; i<n; i++){
            cin >> deliciousness[i];
        }

        sort(deliciousness, deliciousness+n, greater<int>());

        vector<int> indices=cakes(n, k, l);

        for(int i=0; i<indices.size(); i++){
            sum=sum+deliciousness[indices[i]];
            //cout << indices[i] << " ";
        }


        cout << sum << "\n";
    }
}
