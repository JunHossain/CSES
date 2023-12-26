#include<iostream>
#include<string.h>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string str;
        cin >> str;

        short run=0;
        short wicket=0;
        int len=str.length();
        short over=len/6;
        short ball=len-(6*over);

        for(int i=0; i<len; i++){
            if(str[i]=='W'){
                wicket++;
            }else{
                short temp= short(str[i]) - '0';
                run=run+temp;
            }
        }

        cout << over << "." << ball << " over(s) " << run << " run(s) " << wicket << " wicket(s)\n";
    }
}
