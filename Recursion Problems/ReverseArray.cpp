#include <bits/stdc++.h>

using namespace std;

void revarr (vector <int> arr){
    vector <int> newarr;
    int len = arr.size();
    for (int i = len-1; i>=0;i--){
        newarr.push_back(arr[i]);
    }
    for (int i = 0; i<len; i++){
        cout<<newarr[i]<<" ";
    }
    
}

int main() {
    vector <int> arr = {1,2,3,4,5};
    revarr(arr);
    return 0;
}