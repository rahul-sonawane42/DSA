#include <bits/stdc++.h>

using namespace std;

void longsubarr(int arr[], int n, int k){
    int sum = 0;
    int count = 0;

    for (int i =0; i< n; i++){
        for (int j = i; j<n; j++){
            sum+=arr[j];
            if (sum == k ){
                count++;
            }
        }
        sum = 0;
    }

    cout<< "Num of Subarrays with sum " << k << " : " <<  count <<"\n";

}

int main() {
    int arr[] = {3, 1, 2, 4, 6};
    int n = sizeof(arr)/sizeof(int);
    int k = 6;

    longsubarr(arr,n,k);

    return 0;
}