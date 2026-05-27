#include <bits/stdc++.h>

using namespace std;

int findrt(int num, int n){
    int s = 0;
    int e = num/n;

    while (s<=e){
        int m = s + (e-s)/2;
        int rt = 1;
        for (int i = 0; i<n; i++){
            rt = rt*m;
        }
        if (rt == num){
            return m;
        }
        if (rt > num){
            e = m-1;
        } else {
            s = m+1;
        }
    }
    return -1;
}

int main() {
    int num = 27;
    int n = 3;
    cout << "Root is: " << findrt(num,n) << endl;
    return 0;
}