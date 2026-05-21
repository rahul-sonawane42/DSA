#include <bits/stdc++.h>

using namespace std;

bool binsearch(int arr[], int s, int e, int k){
    int m = s + (e-s) / 2;
    if (s<=e){
        if (arr[m] == k){
            return true;
        } else if (arr[m] < k){
            return binsearch(arr,m+1,e,k);
        } else {
            return binsearch(arr,s,m-1,k);
        }
    }
    return false;
}

int main() {
    int arr[] = {3, 4, 6, 7, 12, 16, 17};
    int n = sizeof(arr)/sizeof(int);
    int k = 6;
    if (binsearch(arr,0,n-1,k)){
        cout << "Found!" << endl;
    } else {
        cout << "Not Found" << endl;
    }
    return 0;
}