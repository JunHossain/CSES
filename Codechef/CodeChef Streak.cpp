#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t, n, om, addy;
    cin >> t;
    while(t--){
        cin >> n;
        vector<int> omsolve(n);
        vector<int> addysolve(n);
        int omstreak_temp = 0, addystreak_temp = 0;
        int omstreak = 0, addystreak = 0;
        for(int i = 0; i<n; i++){
            cin >> omsolve[i];
            if(omsolve[i]>0){
                omstreak_temp++;
                if(omstreak_temp>omstreak){
                    omstreak = omstreak_temp;
                }
            }else{
                omstreak_temp = 0;
            }
        }
        //cout << omstreak << endl;
        for(int j = 0; j<n; j++){
            cin >> addysolve[j];
            if(addysolve[j]>0){
                addystreak_temp++;
                if(addystreak_temp>addystreak){}
                addystreak = addystreak_temp;
            }else{
                addystreak_temp = 0;
            }
        }
        //cout << addystreak << endl;
        if(omstreak>addystreak){
            cout << "om" << endl;
        }else if(omstreak==addystreak){
            cout << "Draw" << endl;
        }else{
            cout << "addy" << endl;
        }
    }
}
