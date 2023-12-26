#include <iostream>
using namespace std;

int main()
{
    int t;
    int n, k;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] % k == 0)
            {
                cout << "YES" << endl;
            }
        }
        for(int j=0; j<n; j++){
                int product= arr[j]*arr[j+1];
                if(product%k==0){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
    }
}