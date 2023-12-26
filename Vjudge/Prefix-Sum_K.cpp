#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n);
int is_digit_prime(int n);
int count_digit_prime(int a, int b);

int main(){
    int t;
    cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        int count = count_digit_prime(a, b);

        cout << count << "\n";
    }
}

int count_digit_prime(int a, int b){
    int count=0;

    for (int i=a; i<=b; i++) {
        if (is_prime(i) && is_digit_prime(i)){
            count++;
        }
    }

    return count;
}

bool is_prime(int n){
    if (n<=1) {
        return false;
    }

    for(int j=2; j<=sqrt(n); j++) {
        if (n%j==0) {
            return false;
        }
    }

    return true;
}

int is_digit_prime(int n) {
    int sum=0;

    while(n > 0){
        int digit=n % 10;
        sum=sum + digit;
        n=n / 10;
    }

    return is_prime(sum);
}
