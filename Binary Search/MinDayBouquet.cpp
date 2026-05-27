#include <bits/stdc++.h>

using namespace std;

int calcflowers(int arr[], int n, int k){
    int total = 0;
    for (int i = 0; i<n; i++){
        if (arr[i] <= k){
            total++;
        }
    }
    return total;
}

int mindays(int arr[], int n, int h){
    int maxel = *max_element(arr, arr+n);
    int s = 1;
    int e = maxel;
    int mink = maxel;

    if (n < h){
        return -1;
    }

    while (s<=e){
        int m = s + (e-s)/2;
        int tot = calcflowers(arr, n, m);
        if (tot >= h){
            mink = m;
            e = m-1;
        } else {
            s = m+1;
        }
    }
    return mink;
}

int main() {
    int arr[] = {7, 7, 7, 7, 13, 11, 12, 7};
    int n = sizeof(arr)/sizeof(int);
    int m = 2;
    int k = 3;
    cout << "Minimum number of days: " << mindays(arr, n, m*k) << endl;
    return 0;
}