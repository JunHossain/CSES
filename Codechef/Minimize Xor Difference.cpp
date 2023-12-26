#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long int a, b;
        cin >> a >> b;

        unsigned int x = 1;

        while ((a ^ x) > (b ^ x)) {
            x <<= 1;
        }

        cout << x << endl;
    }

    return 0;
}

