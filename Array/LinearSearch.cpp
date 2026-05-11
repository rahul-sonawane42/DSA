#include <bits/stdc++.h>

using namespace std;

void lsearch(int arr[], int n, int num){
    for (int i= 0; i<n; i++){
        if (arr[i]==num){
            cout<< num <<" found on index " << i << "\n";
            return;
        } 
    }
    cout << num << " not in array\n";
}

int main() {
    int arr[] = {1,2,4,6,8,7,5};
    int n = sizeof(arr)/sizeof(int);
    int num1 = 3;
    lsearch(arr,n,num1);
    int num2 = 2;
    lsearch(arr,n,num2);
    return 0;
}