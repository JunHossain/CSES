#include<bits/stdc++.h>
using namespace std;

int main(){
    short t;
    cin >> t;

    while(t--){
        short n;
        cin >> n;
        char name[n];
        short age[n];

        for(short i=0; i<n; i++){
            cin >> name[i];
        }

        short max_age=0;

        for(short i=0; i<n; i++){
            cin >> age[i];
            if(age[i]>max_age){
                max_age= age[i];
            }
        }

        for(short i=0; i<n; i++){
            if(age[i]==max_age){
                cout << name[i] << " ";
            }
        }

        cout << endl;


    }
}
