#include<bits/stdc++.h>

using namespace std;

int main(){

    float old_salary, new_rate, new_salary;
    cin >> old_salary;

    if(old_salary > 0 && old_salary <= 400.00){
        new_rate=15;
        new_salary= old_salary+(old_salary*(new_rate/100));
    } else if(old_salary > 400.00 && old_salary <= 800.00){
        new_rate=12;
        new_salary= old_salary+(old_salary*(new_rate/100));
    } else if(old_salary > 800.00 && old_salary <= 1200.00){
        new_rate=10;
        new_salary= old_salary+(old_salary*(new_rate/100));
    } else if(old_salary > 1200.00 && old_salary <= 2000.00){
        new_rate=7;
        new_salary= old_salary+(old_salary*(new_rate/100));
    } else{
        new_rate=4;
        new_salary= old_salary+(old_salary*(new_rate/100));
    }

    cout << "Novo salario: " << fixed << setprecision(2) << new_salary << endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << new_salary-old_salary << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << new_rate << " %" << endl;

}

