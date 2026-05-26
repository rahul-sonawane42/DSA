#include <bits/stdc++.h>
using namespace std;


int findPeakElement(int nums[], int n) {
    int low = 0;
    int high = n - 1;

    while (low < high) {
        int mid = (low + high) / 2;

        if (nums[mid] > nums[mid + 1]) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

int main() {
    int nums[] = {1, 2, 1, 3, 5, 6, 4};
    int n = sizeof(nums)/sizeof(int);
    cout << "Peak Element:" << findPeakElement(nums,n) << endl;

    return 0;
}
