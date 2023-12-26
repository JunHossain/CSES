#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int p1, p2;
        int a1, a2;
        int b1, b2;
        int o1=0, o2=0;

        cin >> p1 >> p2;
        cin >> a1 >> a2;
        cin >> b1 >> b2;

        double PA, PB, OA, OB, AB;
        PA = sqrt(pow(p2-a2,2)+pow(p1-a1,2));
        PB = sqrt(pow(p2-b2,2)+pow(p1-b1,2));
        OA = sqrt(pow(o2-a2,2)+pow(o1-a1,2));
        OB = sqrt(pow(o2-b2,2)+pow(o1-b1,2));
        AB = sqrt(pow(a2-b2,2)+pow(a1-b1,2));

        if(PA<=PB){
            if(OA<=OB){
                cout << fixed << setprecision(10) << PA << "\n";
            }else{
                cout << fixed << setprecision(10) << AB/2 << "\n";
            }
        }else{
            if(OA>OB){
                cout << fixed << setprecision(10) << PB << "\n";
            }else{
                cout << fixed << setprecision(10) << AB/2 << "\n";
            }
        }
    }
}
