#include <bits/stdc++.h>

using namespace std;

bool isavail(int arr[], int n, int a){
    for (int i =0; i<n; i++){
        if (arr[i] == a){
            return true;
        }
    }
    return false;
}

int remdup(int arr[], int n){
    int newarr[n];
    int r = 0;
    for (int i =0; i< n; i++){
        if (isavail(newarr, r, arr[i])){
            continue;
        }
        newarr[r] = arr[i];
        r++;
    }

    for (int j = 0; j<r; j++){
        arr[j] = newarr[j];
    }

    return r-1;
}

int main() {
    
    int arr[] = {0,0,0,1,1,1,1,2,2,3,3,3,4,4,4};
    int n = sizeof(arr)/sizeof(int);
    int r = remdup(arr,n);

    for (int i=0; i< n; i++){
        if(i<=r){
            cout<< arr[i] << " ";
        }
        else{
            cout<< "_" << " ";
        }
    }cout<<"\n";
    return 0;
}