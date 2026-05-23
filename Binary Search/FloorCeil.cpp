#include <bits/stdc++.h>

using namespace std;

int findfloor(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int num = n;

    while (s<=e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] > x){
            e = m-1;
        } else {
            num = m;
            s = m+1;
        }
    }
    return arr[num];
}

int findceil(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int num = n;

    while (s<=e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] >= x){
            num = m;
            e = m-1;
        } else {
            s = m+1;
        }
    }
    return arr[num];
}

int main() {
    int arr[] = {3, 4, 4, 7, 8, 10};
    int n = sizeof(arr)/sizeof(int);
    int x = 5;
    cout << "Floor: " << findfloor(arr,n,x) << " Ceil: " << findceil(arr,n,x) << endl;
    return 0;
}