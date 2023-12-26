#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int num, position;

    cin >> arr[0];
    num = arr[0];
    position = 1;

    for(int i=1; i<5; i++){
        cin >> arr[i];

        if(arr[i]>arr[0]){
            num = arr[i];
            position = i+1;
        }
    }

    cout << num << "\n" << position << "\n";
}
