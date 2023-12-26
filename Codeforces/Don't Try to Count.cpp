#include<bits/stdc++.h>
using namespace std;

int flag;

int is_substring(string x, string s){
    if(x.find(s)==string::npos){
        if(s.size()*x.size()>=630){
            flag=0;
            cout<<"-1\n";
            return 0;
        }
        return 1;
    }
    return 0;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        flag=1;
        string x, s, x_temp;

        cin >> n >> m;
        cin >> x >> s;
        int count=0;

        while(is_substring(x, s)){
            x_temp=x;

            x.append(x_temp);

            count++;
        }

        if(flag)
            cout << count << "\n";
    }
}
