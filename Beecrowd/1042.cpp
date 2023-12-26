#include <iostream>

using namespace std;

int main(){
    int a, b, c, num1, num2, num3, temp;
    cin >> a >> b >> c;
    int arr[3]= {a, b, c};
    int arr_og[3]= {a, b, c};

    for(num1=0; num1<3; num1++){
        for(num2= num1+1; num2<3; num2++){
            if(arr[num2]<arr[num1]){
                temp=arr[num1];
                arr[num1]= arr[num2];
                arr[num2]= temp;
            }
        }
    }

    for(num1=0; num1<3; num1++){
        cout << arr[num1] << endl;
    }

    cout << endl;

    for(num3=0; num3<3; num3++){
        cout << arr_og[num3] << "\n";
    }
}
