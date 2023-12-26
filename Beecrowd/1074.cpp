#include<iostream>
using namespace std;

int main(){
    int n, num;
    cin >> n;

    while(n--){
        cin >> num;

        if(num==0){
            cout << "NULL" << endl;
        }
        if(num%2==0){
            if(num<0) cout << "EVEN NEGATIVE" << endl;
            if(num>0) cout << "EVEN POSITIVE" << endl;
        }
        if(num%2!=0){
            if(num<0) cout << "ODD NEGATIVE" << endl;
            if(num>0) cout << "ODD POSITIVE" << endl;
        }
    }
}
