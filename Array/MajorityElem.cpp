#include <bits/stdc++.h>

using namespace std;

void findMaj(int arr[], int n){
    int thres = n/2;
    int count = 1;
    for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j] && i != j){
                count++;
            }
        }
        if (count >= thres){
            cout<< "Majority Element: " << arr[i] << "\n";
            return;
        }
        count = 1;
    }
    cout << "No majority element\n";
}

int main() {
    int arr[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int n = sizeof(arr)/sizeof(int);

    findMaj(arr,n);
    return 0;
}