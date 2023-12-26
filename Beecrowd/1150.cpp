#include<iostream>
using namespace std;

int main(){
    int x, z;
    cin >> x >> z;
    int sum= x, cnt=1;
    while(z<=x){
        cin >> z;
    }

    for(int i=x; sum<=z; i++){
        sum=sum+i;
        cnt++;
    }

    cout << cnt << endl;
}
