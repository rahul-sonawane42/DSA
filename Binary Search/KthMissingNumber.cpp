#include <bits/stdc++.h>
using namespace std;

int missingK(vector<int> vec, int n, int k) {
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        int mid = (s + e) / 2;

        int missing = vec[mid] - (mid + 1);

        if (missing < k) {
            s = mid + 1;
        } else {
            e = mid - 1; 
        }
    }
    return k + e + 1;
}

int main() {
    vector<int> vec = {4, 7, 9, 10};
    int n = vec.size();
    int k = 4;
    int ans = missingK(vec, n, k); 
    cout << "The missing number is: " << ans << "\n"; 
    return 0;
}
