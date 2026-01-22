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
    
    int max_value;
    int max_key;
    int min_value;
    int min_key;

    map<int,int> mp;
    for (int i =0; i<n;i++){
        mp[arr[i]]++;
    }

    for (auto it: mp){
        if (it.second>max_value){
            max_value = it.second;
            max_key = it.first;
        }
        min_value = max_value;
        if (it.second<min_value){
            min_value = it.second;
            min_key = it.first;
        }
    }
    cout<<"Most Frequent: "<<max_key<<" Least Frequent: "<<min_key;

    return 0;
}