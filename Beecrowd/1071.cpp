#include<iostream>
using namespace std;

int main(){
    int x, y;
    int sum = 0;
    cin >> x >> y;

    if(y<x){
        x = x^y;
        y = x^y;
        x = x^y;
    }

    for(int i=x+1; i<y; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout << sum << endl;

}
