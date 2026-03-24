#include <bits/stdc++.h>
#include <climits>

using namespace std;

int seclarge(int arr[], int len){
    
    int secmax = INT_MIN;
    int maxel = INT_MIN;

    for (int i=0; i<len; i++){
        if (arr[i]>maxel){
            secmax = maxel;
            maxel = arr[i];
        }
        else if (arr[i]<maxel && arr[i] != maxel){
            secmax = arr[i];
        }
    }
    return (secmax == INT_MIN)? -1 : secmax;
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

    int secmax = seclarge(arr,n);
    
    cout<<secmax <<" is the second largest element."<<endl;
    return 0;
}