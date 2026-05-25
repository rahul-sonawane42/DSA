#include <bits/stdc++.h>

using namespace std;

int minelem(int arr[], int n){
    int s = 0;
    int e = n-1;

    while (s<e){
        int m = s + (e-s)/2;

        if (arr[m] > arr[e]){
            s = m+1;
        } else {
            e = m;
        }
    }
    return arr[s];
}

int main() {
    int arr[] = {4,5,6,7,0,1,2,3};
    int n = sizeof(arr)/sizeof(int);
    cout << "Lower Bound: " << minelem(arr,n) << endl;
    return 0;
}