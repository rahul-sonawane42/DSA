#include <bits/stdc++.h>

using namespace std;

int calcbouquets(int arr[], int n, int num, int m, int k){
    int bouquet = 0;
    int cons = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] <= num){
            cons++;

            if (cons == k){
                bouquet++;
                cons = 0;
            }
        } else {
            cons = 0;
        } 
    }
    return bouquet;
}

int mindays(int arr[], int n, int m, int k){
    int maxel = *max_element(arr, arr+n);
    int h = m*k;
    int s = 1;
    int e = maxel;
    int mink = maxel;

    if (n < h){
        return -1;
    }

    while (s<=e){
        int mid = s + (e-s)/2;
        int tot = calcbouquets(arr, n, mid, m, k);
        if (tot >= m){
            mink = mid;
            e = mid-1;
        } else {
            s = mid+1;
        }
    }
    return mink;
}

int main() {
    int arr[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = sizeof(arr)/sizeof(int);
    int m = 2;
    int k = 3;
    cout << "Minimum number of days: " << mindays(arr, n, m, k) << endl;
    return 0;
}