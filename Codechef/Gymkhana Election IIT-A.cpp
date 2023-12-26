#include<iostream>
using namespace std;

int main(){
    int T, N, M;
    cin >> T;
    while(T--){
        cin >> N >> M;
        if(M%2==0){
            cout << (M/2)+1 << endl;
        }else{
            cout << ((M-1)/2)+1 << endl;
        }
    }
}
