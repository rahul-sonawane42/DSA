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

    for (int i = 0; i < n; i++ ){
        int min = i;
        for (int j = i+1; j < n; j++){
            if (arr[min]>arr[j]){
                min = j;
            }
        }
        swap(arr[i],arr[min]);
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}