#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int s, int e, int m){
    int i = s;
    int j = m+1;
    int temp[(e-s+1)];
    int r=0;

    while (i<=m && j<=e){
        if (arr[i]<arr[j]){
            temp[r] = arr[i];
            r++;
            i++;
        }else {
            temp[r] = arr[j];
            r++;
            j++;
        }
    }

    while (i<=m){
            temp[r] = arr[i];
            r++;
            i++;
    }
    while (j<=e){
            temp[r] = arr[j];
            r++;
            j++;
    }

    for (int k= 0; k<r; k++){
        arr[s+k] = temp[k];
    }

}

void msort(int arr[], int s, int e){
    
    int m = s+(e-s)/2;

    if (s<e){
        msort(arr,s,m);
        msort(arr,m+1,e);
        merge(arr,s,e,m);
    }
}

int main() {
    int arr[] = {5,4,3,1,2};
    int n = sizeof(arr)/sizeof(int);
    msort(arr,0,n-1);

    for (int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout<<"\n";
    return 0;
}