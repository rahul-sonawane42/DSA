#include <bits/stdc++.h>

using namespace std;

int lastoccur(int arr[], int n, int x){
    int s = 0;
    int e = n-1;
    int num;

    while (s<=e){ 
        int m = s + (e-s)/2;
        
        if (arr[m] > x){
            e = m-1;
        } else {
            num = m;            
            s = m+1;
        }
    }
    return (arr[num] == x) ? num : -1;
}

int main() {
    int arr[] = {3, 4, 13, 13, 13, 13, 13, 13, 20, 40};
    int n = sizeof(arr)/sizeof(int);
    int x = 13;
    cout << "Last Occurence: " << lastoccur(arr,n,x) << endl;
    return 0;
}