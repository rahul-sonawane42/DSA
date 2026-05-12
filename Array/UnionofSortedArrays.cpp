#include <bits/stdc++.h>
#include <vector>

using namespace std;

void insert(vector<int>& arr, int target){
    if (arr.empty() || arr.back() != target){
         arr.push_back(target);
    }
}

vector<int> findUnion(int arr1[],int arr2[], int n, int m){
    vector<int> newarr;
    int i= 0;
    int j= 0;
    while (i<n && j<m){
        if (arr1[i]<arr2[j]){
            insert(newarr, arr1[i]);
            i++;
        }else if (arr1[i]>arr2[j]){
            insert(newarr, arr2[j]);
            j++;
        }else{
            insert(newarr, arr1[i]);
            i++;
            j++;
        }
    }
    while (i<n){
        insert(newarr, arr1[i]);
        i++;
    }
    while (j<m){
        insert(newarr, arr2[j]);
        j++;
    }

    return newarr;
}

int main() {
    
    int arr1[] = {1,2,3,4};
    int n = sizeof(arr1)/sizeof(int);
    int arr2[] = {2,3,4,4,5};
    int m = sizeof(arr2)/sizeof(int);
    vector<int> newarr = findUnion(arr1,arr2,n,m);

    for (int i=0; i< newarr.size(); i++){
        cout<< newarr[i] << " ";
    }cout<<"\n";
    return 0;
}