#include <bits/stdc++.h>

using namespace std;

int countRev(int arr[], int n){
    int count = 0;
    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            if (arr[j]>2*arr[i]){
                count++;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {1,3,2,3,1};
    int n = sizeof(arr)/sizeof(int);

    cout << "Number of Reverse Pairs: " << countRev(arr,n) << endl;
    return 0;
}