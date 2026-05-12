#include <bits/stdc++.h>

using namespace std;

void longsubarr(int arr[], int n, int k){
    int max_len = 0;
    int curr_len = 0;
    int sum = 0;
    int start;
    int cstart;

    for (int i = 0; i<n; i++){
        cstart = i;
        while (sum<k && i<n){
            sum+=arr[i];
            curr_len++;
            i++;
        }
        if (sum == k && curr_len > max_len){
            max_len = curr_len;
            start = cstart;
            sum = 0;
            curr_len = 0;
            i = cstart;
        } else {
            sum = 0;
            curr_len = 0;
            i = cstart;
        }
    }

    cout<< "Max len: " << max_len <<"\n";

    for (int j = start; j< start+max_len; j++){
        cout << arr[j] << " ";
    }cout<< "\n";
}

int main() {
    int arr[] = {10, 5, 2, 7, 1, 9};
    int n = sizeof(arr)/sizeof(int);
    int k = 15;

    longsubarr(arr,n,k);

    return 0;
}