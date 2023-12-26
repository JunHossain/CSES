#include<bits/stdc++.h>
using namespace std;

int main ()
{
  int t;
  cin >> t;

  while (t--){
    long long int i, money;
    int banknote[5]= {50, 25, 10, 5, 1};
    int needs[7];

    cin >> money;
    long long int ans=0;

    for(i=0; i<5; i++){
        needs[i]= money/banknote[i];
        money=money%banknote[i];
        ans=ans+needs[i];
    }

    cout << ans << "\n";
  }
}
