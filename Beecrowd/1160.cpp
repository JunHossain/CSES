#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int pa, pb;
        double ga, gb;
        int year=0;
        cin >> pa >> pb >> ga >> gb;

        for(int i=1; i<=100; i++){
            pa=pa+(pa*(ga/100));
            pb=pb+(pb*(gb/100));

            if(pa>pb){
                year++;
                break;
            }else{
                year++;
            }
        }

        if(pa>pb){
            cout << year << " anos.\n";
        }else{
            cout << "Mais de 1 seculo.\n";
        }
    }
}
