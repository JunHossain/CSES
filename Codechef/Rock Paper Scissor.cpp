#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        char male[n];
        char female[n];
        int win=0;
        int opp_win=0;
        int draw=0;
        int needed_win= (n/2)+1;

        for(int i=0; i<n; i++){
            cin >> male[i];
        }

        for(int i=0; i<n; i++){
            cin >> female[i];
        }

        for(int i=0; i<n; i++){
            if(female[i]== 'R' && male[i]== 'P'){
                win++;
            }else if(female[i]== 'P' && male[i]== 'S'){
                win++;
            }else if(female[i]== 'S' && male[i]== 'R'){
                win++;
            }

            if(male[i]== 'R' && female[i]== 'P'){
                opp_win++;
            }else if(male[i]== 'P' && female[i]== 'S'){
                opp_win++;
            }else if(male[i]== 'S' && female[i]== 'R'){
                opp_win++;
            }
        }

        if(win<=opp_win){
            int change=win;
            while(change<=opp_win){
                change++;
                opp_win--;
            }

            cout << change-win << endl;
        }else{
            cout << "0\n";
        }
    }
}
