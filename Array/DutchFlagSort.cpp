#include <bits/stdc++.h>

using namespace std;

void dsort(int arr[], int n){
    int temp;
    int bound = n;
    for (int i=0; i<bound; i++){
        if (arr[i] == 0){
            temp = arr[i];
            for (int j = i; j>0; j--){
                arr[j] = arr[j-1];
            }
            arr[0] = temp;
        }else if (arr[i] == 2 ){
            temp = arr[i];
            for (int k = i; k<n; k++){
                arr[k] = arr[k+1];
            }
            arr[n-1] = temp;
            i--;
            bound--;
        }
    }
}

int main() {
    int arr[] = {1, 0, 2, 1, 0, 1, 2, 0, 2, 1, 0, 0, 2, 0, 1};
    int n = sizeof(arr)/sizeof(int);

    dsort(arr,n);

    for (int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }cout << "\n";
    return 0;
}