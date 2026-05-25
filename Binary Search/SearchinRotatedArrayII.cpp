#include <bits/stdc++.h>

using namespace std;

bool searchrot(int arr[], int n, int x){
    int s = 0;
    int e = n-1;

    while (s<=e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] == x){
            return true;
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
    return false;
}

int main() {
    int arr[] = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6};
    int n = sizeof(arr)/sizeof(int);
    int x = 10;
    if (!searchrot(arr,n,x)){
        cout << "Not Found" << endl;
    } else {
        cout << "Found!" << endl;
    }
    return 0;
}