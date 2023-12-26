#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool isSymmetrical = true;
    int left = 0, right = n - 1;

    while (left <= right) {
        if (a[left] != a[right]) {
            isSymmetrical = false;
            break;
        }
        left++;
        right--;
    }

    if (isSymmetrical) {
        cout << "Symmetrical" << endl;
    } else {
        cout << "Not Symmetrical" << endl;
    }

    return 0;
}

