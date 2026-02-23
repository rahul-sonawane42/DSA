#include <bits/stdc++.h>

using namespace std;

void recursivebubble(int* arr, int i){
    if (i==0){
        return;
    }
    for (int j = 0; j < i-1; j++){
        if (arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    recursivebubble(arr,(i-1));
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

    recursivebubble(arr,n);

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}