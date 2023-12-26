#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();

    while(t--){
        string str;
        getline(cin, str);

        for(char &c : str){
            if((c>=65 && c<=90) || (c>=97 && c<=122)){
                c=c+3;
            }
        }

        int n=str.size();

        for(int i=0; i<n/2; i++){
            swap(str[i], str[n-i-1]);
        }

        int temp;

        if(n!=0){
            temp= n/2;
        }else{
            temp= (n/2)-1;
        }

        //cout << temp << endl;

        for(int i= temp; i<str.size(); i++){
            str[i]=str[i]-1;
        }

        cout << str << "\n";
    }
}
