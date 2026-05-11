#include <bits/stdc++.h>

using namespace std;

void rev(int arr[], int s, int e){
    int i = s;
    int j = e;
    while (i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void leftrot(int arr[], int n){
    rev(arr, 1, n-1);

    rev(arr,0,n-1);
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    leftrot(arr,n);
    for (int i=0; i< n; i++){
        cout<< arr[i] << " ";
    }cout<<"\n";
    return 0;
}