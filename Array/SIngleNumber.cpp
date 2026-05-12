#include <bits/stdc++.h>

using namespace std;

int single(int arr[], int n){
    int result = 0;
    for (int i = 0; i<n; i++){
        result = result ^ arr[i];
    }
    return result;
}

int main() {
    int arr[] = {2,2,4,4,7,7};
    int n = sizeof(arr)/sizeof(int);

    int num = single(arr,n);

    cout << "The single number is " << num << "\n";
    return 0;
}