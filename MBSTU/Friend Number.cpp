#include<bits/stdc++.h>
#define ul unsigned long long int
using namespace std;

ul divisor_a(ul a){
    ul sum=0;

    for(ul i=1; i<=sqrt(a); i++){
        if(a%i==0){
            sum+=i;
            sum= sum + (a/i);
        }
    }

    return sum-a;
}

ul divisor_b(ul b){
    ul sum=0;

    for(ul i=1; i<=sqrt(b); i++){
        if(b%i==0){
            sum+=i;
            sum= sum + (b/i);
        }
    }

    return sum-b;
}

int main(){
    ul a, b;
    cin >> a >> b;
    ul ans_a = divisor_a(a);
    ul ans_b = divisor_b(b);

    if(ans_a==b && ans_b==a){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
