#include <bits/stdc++.h>

using namespace std;

void merge(int arr1[], int arr2[], int m, int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;

    while (i>=0 && j>=0){
        if (arr1[i] > arr2[j]){
            arr1[k]  = arr1[i];
            i--;
        } else {
            arr1[k] = arr2[j];
            j--;
        }
        k--;
    }
}

int main() {
    int arr1[] = {-5, -2, 4, 5, 0, 0, 0};
    int arr2[] = {-3, 1, 8};
    int m = 4;
    int n = 3;

    merge(arr1,arr2,m,n);
    for (int i = 0; i < m+n; i++)
    {
        cout << arr1[i] << " ";
    }cout << endl;
    
    return 0;
}