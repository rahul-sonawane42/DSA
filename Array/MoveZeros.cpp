#include <bits/stdc++.h>

using namespace std;

void movez(int arr[], int n){
    int newarr[n];
    int r = 0;
    for (int i =0; i< n; i++){
        if (arr[i] == 0){
            continue;
        }
        newarr[r] = arr[i];
        r++;
    }

    for (int j = 0; j<n; j++){
        if (j<r){
            arr[j] = newarr[j];
        } else {
            arr[j] = 0;
        }
    }
}

int main() {
    
    int arr[] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int n = sizeof(arr)/sizeof(int);
    movez(arr,n);

    for (int i=0; i< n; i++){
        cout<< arr[i] << " ";
    }cout<<"\n";
    return 0;
}