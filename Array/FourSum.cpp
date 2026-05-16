#include <bits/stdc++.h>

using namespace std;

void foursum(int arr[], int n){
    set<vector<int>> nums;

    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            for(int k = j+1; k<n; k++){
                for (int m = k+1; m<n; m++){
                    if (arr[i] + arr[j] + arr[k] + arr[m] == 0){
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[m]};
                        sort(temp.begin(), temp.end());
                        nums.insert(temp);
                    }
                }
            }
        }
    }

        if (nums.empty()){
            cout << "No four numbers with sum 0" << "\n";
        } else{
            for (auto &trip: nums){
                for (int i: trip){
                    cout << i << " ";
                }cout << endl;
            }
        }
}

void optimisedfoursum(int arr[], int n){
    vector<vector<int>> result;

    sort(arr, arr+n);

    for (int i = 0; i<n; i++){
        if (i>0 && arr[i] == arr[i-1]) continue;
        for (int j = i+1; j< n; j++){
            if (j>i+1 && arr[j] == arr[j-1]) continue;

            int left = j+1;
            int right = n-1;

            while (left < right){
                int curr_sum = arr[i] + arr[j] + arr[left] + arr[right];
                if (curr_sum == 0){
                    result.push_back({arr[i], arr[j], arr[left],arr[right]});
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
    }
        if (result.empty()){
            cout << "No four numbers with sum 0" << "\n";
        } else{
            for (auto &trip: result){
                    cout << trip[0] << " " << trip[1] << " " << trip[2] << " " << trip[3] << endl;
                }
            }
}

int main() {
    int arr[] = {-1,0,1,2,-1,3,-2, -1, -1};
    int n = sizeof(arr)/sizeof(int);

    foursum(arr,n);
    cout << endl;
    optimisedfoursum(arr,n);
    return 0;
}