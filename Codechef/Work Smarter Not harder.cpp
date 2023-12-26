#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int length, v1, v2;
        cin >> length >> v1 >> v2;

        int tortime= length/v1;
        if(length%v1!=0) tortime++;
        int hartime= length/v2;
        if(length%v2!=0) hartime++;

        int restime= (tortime-1)-hartime;

        if(restime>=0){
            cout << restime << endl;
        }else{
            cout << "-1\n";
        }
    }
}
