#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;

    while(cin >> t){
        int arr[7];

        for(int i=0; i<7; i++){
            cin >> arr[i];
        }

        int read=0;
        int day;

        while(read<t){
            for(int i=0; i<7; i++){
                read=read+arr[i];

                if(read>=t){
                    day=i;
                    break;
                }

                if(i==6 && read<t){
                    i=-1;
                }
            }
        }

        cout << day+1 << endl;
    }

}
