#include <bits/stdc++.h>

using namespace std;

int large(int arr[],int len){
    
    int maxel = arr[0];
    for (int i=1; i<len; i++){
        if (arr[i]>maxel){
            maxel = arr[i];
        }
    }

    return maxel;
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

    int maxel = large(arr,n);
    cout<<maxel <<" is the largest element."<<endl;

    return 0;
}