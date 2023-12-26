#include<iostream>
using namespace std;

int main(){
    int testcase, a, b, c;
    cin >> testcase;
    while(testcase--){
        cin >> a >> b >> c;
        if(a==b+c || b==a+c || c==a+b){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}