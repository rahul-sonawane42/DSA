#include <bits/stdc++.h>
using namespace std;


int daysNeeded(vector<int>& weights, int capacity) {
    int days = 1;

    int currentLoad = 0;

    for (int w : weights) {
        if (currentLoad + w > capacity) {
            days++;
            currentLoad = w;
        } else {
            currentLoad += w;
        }
    }
    return days;
}

int shipWithinDays(vector<int>& weights, int d) {
    int s = *max_element(weights.begin(), weights.end());
    int e = accumulate(weights.begin(), weights.end(), 0);

    while (s < e) {
        int m = s + (e - s) / 2;

        int needed = daysNeeded(weights, m);

        if (needed <= d) {
            e = m;
        } else {
            s = m + 1;
        }
    }

    return s;
}    


int main() {
    vector<int> weights = {5,4,5,2,3,4,5,6};
    int d = 5;
    cout << "Minimum Capacity of the ship: " << shipWithinDays(weights, d) << endl;

    return 0;
}
