#include <bits/stdc++.h>

using namespace std;

int miss(int arr[], int size){
    int n = size+1;
    int sumofn = n*(n+1)/2;
    int sum = 0;

    for (int i = 0; i< size; i++){
        sum+=arr[i];
    }

    return (sumofn-sum);
}

int main() {
    int arr[] = {1,3,2,5,4,7,9,8};
    int n = sizeof(arr)/sizeof(int);

    cout << "Missing Number is " << miss(arr,n) << "\n";
    return 0;
}