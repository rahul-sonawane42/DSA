#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> leader(int arr[], int n){
    vector<int> newarr;
    bool flag;
    for (int i = 0; i<n; i++){
        flag = 1;
        if (i == n-1){
            newarr.push_back(arr[i]);
        }else{
            for (int j = i+1; j<n; j++){
                if (arr[i]< arr[j]){
                    flag = 0;
                    break;
                }
            }
            if (flag == 1){
                newarr.push_back(arr[i]);
            }
        }
    }
    return newarr;
}

int main() {
    int arr[] = {4,7,1,0};
    int n = sizeof(arr)/sizeof(int);

    vector<int> newarr = leader(arr,n);

    cout << "Leaders are: ";
    for (int i = 0; i<newarr.size(); i++){
        cout << newarr[i] << " ";
    }cout << "\n";
    return 0;
}