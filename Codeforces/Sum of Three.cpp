#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        if(n<4){
            printf("NO\n");
            continue;
        }
        int first=1;
        int second, third;

        for(int i=first+1; i<n; i++){
            second = n-first-i;
            if(i%3!=0 && second%3!=0){
                third = i;
                break;
            }
        }

        if((first+second+third==n)){
            if((first==second || first==third || second==third)){
                printf("NO\n");
                continue;
            }
        }
        printf("YES\n");
        printf("%d %d %d\n", first, second, third);
    }

}
