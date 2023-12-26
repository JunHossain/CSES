#include<bits/stdc++.h>
using namespace std;

int main(){
    double arr[3];

    for(int i=0; i<3; i++){
        cin >> arr[i];
    }

    int n= sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n, greater<double>());

    double a = arr[0];
    double b = arr[1];
    double c = arr[2];

    if(a>=b+c) cout << "NAO FORMA TRIANGULO\n";
    if(a*a==(b*b)+(c*c)) cout << "TRIANGULO RETANGULO\n";
    if(a*a > (b*b)+(c*c)) cout << "TRIANGULO OBTUSANGULO\n";
    if(a*a < (b*b)+(c*c)) cout << "TRIANGULO ACUTANGULO\n";
    if(a==b && b==c && a==c) cout << "TRIANGULO EQUILATERO\n";
    if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)) cout << "TRIANGULO ISOSCELES\n";
}
