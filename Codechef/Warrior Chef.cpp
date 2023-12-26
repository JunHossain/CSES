#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int enemies, strength;
        cin >> enemies >> strength;
        int enstr[enemies];

        for(int i=0; i<enemies; i++){
            cin >> enstr[i];
        }

        int resistance=0;
        int temp_str= strength;

        int i=0;
        int count=0;

        while(temp_str>=0){
            if(resistance>=enstr[i]){
                i++;
                count++;
            }else{
                temp_str=temp_str-enstr[i];
                i++;
                count++;
            }

            if(count==enemies && temp_str>=0){
                break;
            }

            if(temp_str<0){
                temp_str=strength;
                resistance++;
                i=0, count=0;
            }
        }

        cout << resistance << "\n";
    }
}
