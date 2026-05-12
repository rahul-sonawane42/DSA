#include <bits/stdc++.h>

using namespace std;

int maxn(int arr[], int n){
    int max_count = 0;
    int count = 0;
    for (int i = 0; i< n; i++){
        while(arr[i] == 1){
            count++;
            i++;
        }
        if (count > max_count){
            max_count = count;
            count = 0;
        }
    }
    return max_count;
}

int main() {
    int arr[] = {1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1};
    int n = sizeof(arr)/sizeof(int);
    int count = maxn(arr,n);

    cout<< "Max Consecutive One's: " << count << "\n";
    return 0;
}