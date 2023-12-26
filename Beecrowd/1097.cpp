#include<iostream>
using namespace std;

int main(){
    int i=1, j=7;

    for(int k=1; k<6; k++){
        for(j; j>4; j--){
            cout << "I=" << i << " J=" << j <<"\n";
        }
        i=i+2;
        j=j+5;
    }
}
