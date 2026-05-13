#include <bits/stdc++.h>

using namespace std;

void twosum(int arr[], int n, int k){
    int n1 = 0;
    int n2 = 0;

    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            if (arr[i]+arr[j] == k){
                n1 = i;
                n2 = j;
            }
        }
    }

    if (n1==n2){
        cout << "No two numbers with sum " << k << "\n";
    } else{
        cout << "Found two numbers at index {" << n1 << "," << n2 << "} \n";
        cout << arr[n1] << " + " << arr[n2] << " = " << k << "\n"; 
    }
}

int main() {
    int arr[] = {2,6,5,8,11};
    int n = sizeof(arr)/sizeof(int);
    int k = 17;

    twosum(arr,n,k);
    return 0;
}