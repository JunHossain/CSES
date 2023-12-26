#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int code[5]={1, 2, 3, 4, 5};
    double price[5]= {4, 4.5, 5, 2, 1.5};
    int X, Y;
    cin >> X >> Y;

    double total_price;
    total_price= price[X-1]*Y;


    cout << "Total: R$ " << fixed << setprecision(2) << total_price << endl;


}
