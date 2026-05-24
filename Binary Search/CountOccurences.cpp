#include <bits/stdc++.h>

using namespace std;

int countoccur(int arr[], int s, int e, int x){
    if (s>e) return 0;
    
    int count = 0;
    int m = s + (e-s)/2;
    
    if (arr[m] > x){
        count += countoccur(arr,s,m-1,x);
    } else if (arr[m] < x) {            
        count += countoccur(arr,m+1,e,x);
    } else {
        count += countoccur(arr,s,m-1,x);
        count += countoccur(arr,m+1,e,x);
        count++;
    }
    return count;
}

int main() {
    int arr[] = {3, 4, 13, 13, 13, 13, 13, 13, 20, 40};
    int n = sizeof(arr)/sizeof(int);
    int x = 13;
    cout << "Last Occurence: " << countoccur(arr,0,n-1,x) << endl;
    return 0;
}