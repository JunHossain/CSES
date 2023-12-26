#include<bits/stdc++.h>
using namespace std;
#define ul unsigned long long int

int main(){
    ul a, b;
    ul facta=1, factb=1;

    while(cin >> a >> b){
        for(int i=1; i<=a; i++){
            facta=facta*i;
        }

        for(int i=1; i<=b; i++){
            factb=factb*i;
        }

        cout << facta+factb << "\n";
        facta=factb=1;
    }
}
