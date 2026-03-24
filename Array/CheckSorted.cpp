#include <bits/stdc++.h>

using namespace std;

void issorted(int arr[], int n){
    for (int i=0; i<n-1; i++){
        if (arr[i] > arr[i+1]){
            cout<<"Not Sorted";
            return;
        }
    }
    cout<<"Sorted!!";
}

int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        int num;
        cout<<"Enter element "<< i+1<<": "<<endl;
        cin>>num;
        arr[i] = num;
    }

    issorted(arr,n);
    return 0;
}