#include <bits/stdc++.h>

using namespace std;

int kadane(int arr[], int n){
    int max_sum = 0;
    int sum = 0;
    for (int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            sum+=arr[j];
            if (sum > max_sum){
                max_sum = sum;
            }
        }
        sum = 0;
    }
    return max_sum;
}

int main() {
    int arr[] = {-2, 3, 5, 2, 7, -4};
    int n = sizeof(arr)/sizeof(int);

    cout << "Max sub-array sum: " << kadane(arr,n) << "\n";
    return 0;
}