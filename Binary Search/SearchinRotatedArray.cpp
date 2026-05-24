#include <bits/stdc++.h>

using namespace std;

int searchrot(int arr[], int n, int x){
    int s = 0;
    int e = n-1;

    while (s<=e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] == x){
            return m;
        } 
        if (arr[s] <= arr[m]){
            if (arr[s] <= x && x < arr[m]){        
                e = m-1;
            } else {
                s = m+1;
            }
        } else {
            if (arr[e] >= x && x > arr[m]){        
                s = m+1;
            } else {
                e = m-1;
            }
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr)/sizeof(int);
    int x = 8;
    int res = searchrot(arr,n,x);
    if (res == -1){
        cout << "Not Found" << endl;
    } else {
        cout << "Found at index: " << res << endl;
    }
    return 0;
}