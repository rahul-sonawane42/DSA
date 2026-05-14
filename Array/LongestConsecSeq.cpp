#include <bits/stdc++.h>

using namespace std;

int lsearch(int arr[], int n, int k){
    for (int i = 0; i< n; i++){
        if (arr[i] == k){
            return i;
        }
    }
    return -1;
}

int longcs(int arr[], int n){
    int max_len = 1;
    for (int i = 0; i< n; i++){
        int count = 1;
        int x = arr[i];
        while (lsearch(arr,n,x+1) != -1){
            x = x+1;
            count++;
        }
        max_len = max(count, max_len);
    }
    return max_len;
}

int main() {
    int arr[] = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int n = sizeof(arr)/sizeof(int);

    cout << "Length of longest Consecutive Sequence is " << longcs(arr,n) << "\n"; 
    return 0;
}