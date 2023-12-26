#include <iostream>

using namespace std;

void queenattack(int a, int b, int x, int y){
    int row = abs(a-x);
    int col = abs(b-y);
    if(a==x || b==y || row==col){
        cout << "Attack\n";
    }else{
        cout << "Peace\n";
    }
}

int main() {
    int t;
    cin >> t;

    while(t--){
        int a, b, x, y;
        cin >> a >> b >> x >> y;

        queenattack(a, b, x, y);
    }

}
