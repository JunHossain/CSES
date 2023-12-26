#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int response;
    int prequality = 0;
    int word, quality, index;
    cin >> t;

    for(int i=1; i<=t; i++){
        cin >> response;

        for(int j=1; j<=response; j++){
            cin >> word >> quality;

            if(word <=10 && quality>prequality){
                prequality = quality;
                index = j;
            }
        }
        cout << index << "\n";
        prequality = 0;
        index = 0;
    }
}
