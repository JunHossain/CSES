#include<iostream>
using namespace std;
int main(){
    int t;
    int j=1;
    cin >> t;
    string hate= "I hate";
    string love= "I love";
    string that= "that ";
    string it= "it ";

    for(int i=1; i<=t; i++){
        if(j%2!=0){
            cout << hate << " ";
        }else{
            cout << love << " ";
        }
        if(i!=t){
            cout << that;
        }else{
            cout << it;
        }
        j++;

}
}
