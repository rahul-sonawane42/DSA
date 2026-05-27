#include <bits/stdc++.h>

using namespace std;

int calcbanana(int arr[], int n, int k){
    int total = 0;
    for (int i = 0; i<n; i++){
        total += (arr[i]+k-1)/k;
    }
    return total;
}

int banana(int arr[], int n, int h){
    int maxel = *max_element(arr, arr+n);
    int s = 1;
    int e = maxel;
    int mink = maxel;

    while (s<=e){
        int m = s + (e-s)/2;
        int tot = calcbanana(arr, n, m);
        if (tot <= h){
            mink = m;
            e = m-1;
        } else {
            s = m+1;
        }
    }
    return mink;
}

int main() {
    int arr[] = {7, 15, 6, 3};
    int n = sizeof(arr)/sizeof(int);
    int h = 8;
    cout << "Minimum number of bananas per hour: " << banana(arr, n, h) << endl;
    return 0;
}