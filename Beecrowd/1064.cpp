#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float num[6];
    int positive=0;
    float sum=0;

    for(int i=0;i<6;i++){
        cin >> num[i];
    }

    for(int j=0;j<6;j++){
        if(num[j]>0){
            positive++;
            sum+=num[j];
        }
    }

    cout << positive << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum/positive << endl;
}
