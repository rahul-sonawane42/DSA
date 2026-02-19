#include <bits/stdc++.h>

using namespace std;

int main() {
    
    cout<<"Enter number of elements in the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i=1; i<n; i++){
        int j = i-1;
        while (j>=0 && arr[j+1]<arr[j]){
            swap(arr[j],arr[j+1]);
            j--;
        }
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}