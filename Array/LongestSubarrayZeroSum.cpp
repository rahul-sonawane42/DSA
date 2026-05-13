#include <bits/stdc++.h>

using namespace std;

void longsubarr(int arr[], int n){
    int max_len = 0;
    int curr_len = 0;
    int sum = 0;
    int start;
    int cstart;

    for (int i =0; i< n; i++){
        cstart = i;
        for (int j = i; j<n; j++){
            sum+=arr[j];
            curr_len++;
            if (sum == 0 && curr_len>max_len){
                max_len = curr_len;
                start = cstart;
            }
        }
        curr_len = 0;
        sum = 0;
    }
    cout<< "Max len: " << max_len <<"\n";

    for (int j = start; j< start+max_len; j++){
        cout << arr[j] << " ";
    }cout<< "\n";
}

int main() {
    int arr[] = {6, -2, 2, -8, 1, 7, 4, -10};
    int n = sizeof(arr)/sizeof(int);

    longsubarr(arr,n);

    return 0;
}