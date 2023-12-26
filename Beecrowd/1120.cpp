#include<bits/stdc++.h>
using namespace std;

string check_zero(string new_n){
    int i=0;
    while(new_n[i]=='0'){
        i++;
    }

    new_n.erase(0,i);

    return new_n;
}

int main(){
    string d, n;

    while(1){
        cin >> d >> n;

        if(d=="0" && n=="0"){
            break;
        }

        string new_n= "";

        for(int i=0; i<n.size(); i++){
            if(n[i]!=d[0]){
                new_n = new_n+n[i];
            }
        }

        string remove_zero= check_zero(new_n);

        if(remove_zero.empty()){
            cout << "0\n";
        }else{
            cout << remove_zero << endl;
        }

    }
}
