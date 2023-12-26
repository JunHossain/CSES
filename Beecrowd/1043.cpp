#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float a, b, c, perimeter, area;
    cin >> a >> b >> c;

    if(a+b>c && b+c>a && a+c>b){
        perimeter= a+b+c;
        cout << "Perimetro = " << fixed << setprecision(1) << perimeter << endl;
    } else{
        area= .5*(a+b)*c;
        cout << "Area = " << fixed << setprecision(1) << area << endl;
    }
}

