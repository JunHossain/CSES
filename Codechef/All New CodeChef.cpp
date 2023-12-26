#include<iostream>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(x>y) cout << "New" << endl;
    if(x==y) cout << "Same" << endl;
    if(x<y) cout << "Old" << endl;
}
