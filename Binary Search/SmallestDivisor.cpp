#include <bits/stdc++.h>

using namespace std;

int calcdivsum(int arr[], int n, int k){
    int total = 0;
    for (int i = 0; i<n; i++){
        total += (arr[i]+k-1)/k;
    }
    return total;
}

int smalld(int arr[], int n, int h){
    int maxel = *max_element(arr, arr+n);
    int s = 1;
    int e = maxel;
    int ans = maxel;

    while (s<=e){
        int m = s + (e-s)/2;
        int tot = calcdivsum(arr, n, m);
        if (tot <= h){
            ans = m;
            e = m-1;
        } else {
            s = m+1;
        }
    }
    return ans;
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int h = 8;
    cout << "Smallest Divisor: " << smalld(arr, n, h) << endl;
    return 0;
}