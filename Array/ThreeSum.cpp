#include <bits/stdc++.h>

using namespace std;

void threesum(int arr[], int n){
    set<vector<int>> nums;

    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                if (arr[i]+arr[j]+arr[k] == 0){
                    vector<int> temp = {arr[i],arr[j],arr[k]};
                    sort(temp.begin(), temp.end());
                    nums.insert(temp);
                }
            }
        }
    }

        if (nums.empty()){
            cout << "No three numbers with sum 0" << "\n";
        } else{
            for (auto &trip: nums){
                for (int i: trip){
                    cout << i << " ";
                }cout << endl;
            }
        }
}

void optimisedthreesum(int arr[], int n){
    vector<vector<int>> result;

    sort(arr, arr+n);

    for (int i = 0; i<n; i++){
        if (i>0 && arr[i] == arr[i-1]) continue;

        int left = i+1;
        int right = n-1;

        while (left < right){
            int curr_sum = arr[i] + arr[left] + arr[right];
            if (curr_sum == 0){
                result.push_back({arr[i],arr[left],arr[right]});
                left++;
                right--;

                while (left<right && arr[left] == arr[left-1]) left++;
                while (left<right && arr[right] == arr[right+1]) right--;
            } else if (curr_sum < 0){
                left++;
            } else{
                right--;
            }
        }
    }
        if (result.empty()){
            cout << "No three numbers with sum 0" << "\n";
        } else{
            for (auto &trip: result){
                    cout << trip[0] << " " << trip[1] << " " << trip[2] << endl;
                }
            }
}

int main() {
    int arr[] = {-1,0,1,2,-1,-4};
    int n = sizeof(arr)/sizeof(int);

    threesum(arr,n);

    optimisedthreesum(arr,n);
    return 0;
}