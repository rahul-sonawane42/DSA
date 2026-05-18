#include <bits/stdc++.h>

using namespace std;

vector<int> missrep(int arr[], int n){
    vector<int> ret;
    int miss;
    int rep;
    for (int i = 1; i<=n; i++){
        int count = 0;
        for (int j = 0; j<n; j++){
            if (arr[j] == i){
                count++;
            }
        }
        if (count == 2){
            rep = i;
        } else if (count == 0){
            miss = i;
        }
    }
    ret.push_back(rep);
    ret.push_back(miss);
    return ret;
}

vector<int> optimisedmissrep(int arr[], int n){
    vector<int> ret;
    int sumofn = n*(n+1)/2;
    int sum = 0;
    int sumofn2 = n*(n+1)*((2*n)+1)/6;
    int sum2 = 0;

    for (int i = 0; i< n; i++){
        sum+=arr[i];
        sum2+=arr[i]*arr[i];
    }

    int v1 = sum - sumofn;
    int v2 = sum2 - sumofn2;
    v2 = v2/v1;

    int x = (v1+v2)/2;
    int y = x - v1;
    
    ret.push_back(x);
    ret.push_back(y);

    return ret;
}

int main() {
    int arr[] = {1, 2, 3, 6, 7, 5, 7};
    int n = sizeof(arr)/sizeof(int);

    vector<int> newarr = missrep(arr,n);
    
    for (int i = 0; i<2; i++){
        cout << newarr[i] << " ";
    } cout << endl;

    vector<int> newarr1 = optimisedmissrep(arr,n);
    
    for (int i = 0; i<2; i++){
        cout << newarr1[i] << " ";
    } cout << endl;
    return 0;
}