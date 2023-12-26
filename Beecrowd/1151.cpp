#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long first=0, second=1, next, temp;
    cout << "0 1 ";

    for(int i=3; i<=n; i++){
        next=first+second;
        temp=second;
        second=next;
        first=temp;

        cout << next;
        if(i<n) cout << " ";
    }
    cout << "\n";
}
