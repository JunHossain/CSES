#include<iostream>
using namespace std;

int main(){
    int a, n;
    int sum=0;
    cin >> a >> n;
    while(n<1){
        cin >> n;
    }


    for(int i=a; i<=a+n-1; i++){
        sum= sum+i;
    }

    cout << sum << endl;
}
