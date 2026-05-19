#include <bits/stdc++.h>

using namespace std;

int maxProd(int arr[], int n){
    int prod = INT_MIN;
    int curr_prod = 1;

    for (int i = 0; i< n; i++){
        for (int j = i; j<n; j++){
            curr_prod*=arr[j];
            prod = max(prod, curr_prod);
        }
        curr_prod = 1;
    }
    return prod;
}

int main() {
    int arr[] = {1,2,-3,0,-4,-5};
    int n = sizeof(arr)/sizeof(int);

    cout << "Maximum Product: " << maxProd(arr,n) << endl;

    return 0;
}