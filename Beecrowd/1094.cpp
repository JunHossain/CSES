#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num[n];
    char animal[n];
    char poshu[3] = {'C', 'R', 'S'};


    int sum = 0;
    int coelho = 0;
    int rato = 0;
    int sapo = 0;

    double coelho_percent;
    double rato_percent;
    double sapo_percent;

    for(int i=0; i<n; i++){
        cin >> num[i] >> animal[i];
        sum = sum+num[i];
    }

    for(int j=0; j<n; j++){
        if(animal[j]=='C'){
            coelho = coelho+num[j];
        }
        if(animal[j]=='R'){
            rato = rato+num[j];
        }
        if(animal[j]=='S'){
            sapo = sapo+num[j];
        }
    }

    coelho_percent = (100.0/sum)*coelho;
    rato_percent = (100.0/sum)*rato;
    sapo_percent = (100.0/sum)*sapo;

    cout << "Total: " << sum << " cobaias" << "\n";
    cout << "Total de coelhos: " << coelho << "\n";
    cout << "Total de ratos: " << rato << "\n";
    cout << "Total de sapos: " << sapo << "\n";

    cout << "Percentual de coelhos: " << fixed << setprecision(2) << coelho_percent << " %\n";
    cout << "Percentual de ratos: " << fixed << setprecision(2) << rato_percent << " %\n";
     cout << "Percentual de sapos: " << fixed << setprecision(2) << sapo_percent << " %\n";
}
