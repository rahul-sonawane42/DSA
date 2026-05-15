#include <bits/stdc++.h>

using namespace std;

void findMaj(int arr[], int n){
    vector<int> nums;
    int thres = n/3;
    int count = 1;
    for (int i = 0; i<n; i++){
        for (int j = 0; j < n; j++){
            if (arr[i] == arr[j] && i != j){
                count++;
            }
        }
        if (count > thres && !(find(nums.begin(),nums.end(),arr[i]) != nums.end())){
            nums.push_back(arr[i]);
        }
        count = 1;
    }
    if (nums.size()>0){
        cout << "[ ";
        for (int i = 0; i<nums.size(); i++){
            cout << nums[i] << " ";
        }cout << "]" << endl;
    }
    else{
        cout << "No majority element\n";
    }
}

int main() {
    int arr[] = {1, 2, 1, 1, 3, 2, 2};
    int n = sizeof(arr)/sizeof(int);

    findMaj(arr,n);
    return 0;
}