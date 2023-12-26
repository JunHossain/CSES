#include<iostream>
using namespace std;

int main(){
    int num[5];
    int even=0;

    for(int i=0;i<5;i++){
        cin >> num[i];
        if(num[i]%2==0){
            even++;
        }
    }

    cout << even << " valores pares" << endl;
}
