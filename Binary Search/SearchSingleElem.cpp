#include <bits/stdc++.h>

using namespace std;

int single(int arr[], int n){
    int s = 0;
    int e = n-1;

    while (s<e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] == arr[m^1]){
            s = m+1;
        } else {
            e = m;
        }
    }
    return arr[s];
}

int main() {
    int arr[] = {1,1,2,2,3,3,4,5,5,6,6};
    int n = sizeof(arr)/sizeof(int);
    cout << "Single Element: " << single(arr,n) << endl;
    return 0;
}