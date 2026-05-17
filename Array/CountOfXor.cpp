#include <bits/stdc++.h>

using namespace std;

void xorsubarr(int arr[], int n, int k){
    int sum = 0;
    int count = 0;

    for (int i =0; i< n; i++){
        for (int j = i; j<n; j++){
            sum = sum ^ arr[j];
            if (sum == k ){
                count++;
            }
        }
        sum = 0;
    }

    cout<< "Num of Subarrays with xor " << k << " : " <<  count <<"\n";

}

int main() {
    int arr[] = {5, 6, 7, 8, 9};
    int n = sizeof(arr)/sizeof(int);
    int k = 5;

    xorsubarr(arr,n,k);

    return 0;
}