#include<bits/stdc++.h>
using namespace std;

int main(){
    int par[5];
    int par_count=0;
    int impar[5];
    int impar_count=0;
    int input;

    for(int i=0; i<15; i++){
        cin >> input;

        if(input%2!=0){
            impar[impar_count]=input;
            impar_count++;
        }else{
            par[par_count]=input;
            par_count++;
        }

        if(impar_count==5){
            for(int j=0; j<5; j++){
                cout << "impar[" << j << "] = " << impar[j] << "\n";
            }

            impar_count=0;
        }

        if(par_count==5){
            for(int j=0; j<5; j++){
                cout << "par[" << j << "] = " << par[j] << "\n";
            }

            par_count=0;
        }

        if(i==14){
            for(int j=0; j<impar_count; j++){
                cout << "impar[" << j << "] = " << impar[j] << "\n";
            }

            for(int j=0; j<par_count; j++){
                cout << "par[" << j << "] = " << par[j] << "\n";
            }
        }
    }
}
