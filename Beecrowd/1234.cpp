#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin, str);
    int len=str.size();
    bool last=0;

    for(int i=0; i<len; i++){
        if(str[i]!=' '){
            if(last){
                str[i]=tolower(str[i]);
                last=0;
            }else{
                str[i]=toupper(str[i]);
                last=1;
            }
        }else{
            continue;
        }
    }

    cout << str << endl;
}
