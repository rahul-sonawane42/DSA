#include <bits/stdc++.h>

using namespace std;

int findsqrt(int n){
    int s = 0;
    int e = n/2;
    int ans = 0;

    while (s<=e){
        int m = s + (e-s)/2;
        if (m*m > n){
            e = m-1;
        } else {
            ans = m;
            s = m+1;
        }
    }
    return ans;
}

int main() {
    int num = 36;
    cout << "Square root is: " << findsqrt(num) << endl;
    return 0;
}