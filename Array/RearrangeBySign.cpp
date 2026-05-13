#include <bits/stdc++.h>
#include <vector>

using namespace std;

void rearr(int arr[], int n){
    vector<int> pos;
    vector<int> neg;

    for (int i=0; i<n; i++){
        if (arr[i] < 0){
            neg.push_back(arr[i]);
        }else{
            pos.push_back(arr[i]);
        }
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i<pos.size() && j<neg.size()){
        arr[k++] = pos[i++];
        arr[k++] = neg[j++];
    }

    while (i<pos.size()){
        arr[k++] = pos[i++];
    }

    while (j<neg.size()){
        arr[k++] = neg[j++];
    }
}

int main() {
    int arr[] = {1,2,-3,-1,-2,3};
    int n = sizeof(arr)/sizeof(int);

    rearr(arr,n);

    for(int i = 0; i< n; i++){
        cout << arr[i] << " "; 
    }cout<< "\n";

    return 0;
}