#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    char name[4]={'v', 'i' ,'k', 'a'};

    while(t--){
        int a, b;
        cin >> a >> b;
        char arr[a][b];
        int check=0, count_=0;;
        for(int i=0; i<a; i++){
            if(arr[i][0]==name[check]){
                count_++;
                check++;
                for(int j=i+1; j<b; j++){
                    if(arr[i][j]==name[check]){
                        check++;
                        count_++;
                    }
                }
            }
        }
    }
}
