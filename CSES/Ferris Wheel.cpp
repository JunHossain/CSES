#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    vector<int> weight;

    for(int i=0; i<n; i++){
        int input;
        cin >> input;
        weight.push_back(input);
    }

    sort(weight.begin(), weight.end());
    int count=0;
    int left=0;
    int right=n-1;

    while(left<=right){
        if(weight[left]+weight[right]<=x){
            left++;
            right--;
        }else{
            right--;
        }
        count++;
    }


    cout << count << endl;
}
