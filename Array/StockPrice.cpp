#include <bits/stdc++.h>

using namespace std;

int maxp(int arr[], int n){
    int min = 0;
    int max = 0;
    for (int i = 1; i<n; i++){
        if (arr[i] < arr[min]){
            min = i;
        }
    }
    for (int j = min+1; j<n; j++){
        if (arr[j] - arr[min] > max){
            max = arr[j] - arr[min];
        }
    }
    return max;
}

int main() {
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);

    cout << "Max Profit is " << maxp(arr,n) << "\n";
    return 0;
}