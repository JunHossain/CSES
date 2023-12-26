#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin >> n;
    int in = 0, out = 0;

    while(n--){
        cin >> x;
        if(x>=10 && x<=20){
            in++;
        }else{
            out++;
        }
    }

    cout << in << " in" << endl;
    cout << out << " out" << endl;
}
