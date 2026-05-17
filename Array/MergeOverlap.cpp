#include <bits/stdc++.h>

using namespace std;

void mergeOver(vector<vector<int>> &arr){
    int i = 0;
    while (i < arr.size()-1){
        if (arr[i][1] >= arr[i+1][0]){
            arr[i][1] = max(arr[i][1], arr[i+1][1]);
            arr.erase(arr.begin()+i+1);
        } else {
            i++;
        }
    }
}

int main() {
    vector<vector<int>> arr = {{1,3},{2,6},{8,10},{15,18}};

    mergeOver(arr);
    for (auto &i: arr){
        cout << i[0] << " " << i[1] << endl;
    }

    return 0;
}