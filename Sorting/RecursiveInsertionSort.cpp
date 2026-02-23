#include <bits/stdc++.h>

using namespace std;

void recursiveinsertion(int* arr, int i, int n){

    if (i==n){
        return;
    }

    int j = i-1;
    while (j>=0 && arr[j+1]<arr[j]){
        swap(arr[j],arr[j+1]);
        j--;
    }

    recursiveinsertion(arr,(i+1),n);

}

int main() {
    
    cout<<"Enter number of elements in the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout<<"Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    recursiveinsertion(arr,1,n);

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}