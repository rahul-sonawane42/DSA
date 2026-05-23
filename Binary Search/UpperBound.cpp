#include <bits/stdc++.h>

using namespace std;

int upperb(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int num = n;

    while (s<=e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] > x){
            num = m;
            e = m-1;
        } else {
            s = m+1;
        }
    }
    return num;
}

int main() {
    int arr[] = {3,5,8,9,15,19};
    int n = sizeof(arr)/sizeof(int);
    int x = 9;
    cout << "Upper Bound: " << upperb(arr,n,x) << endl;
    return 0;
}