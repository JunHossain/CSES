#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n*2; i++){
        int temp=1, col=1;
        for(int j=1; j<=3; j++){
            if(i==1){
                cout << j << " ";
            }else{
                if(j==1 && temp <2){
                    cout << j << " ";
                    temp++;
                }
                if(  )
            }
        }
    }
}
