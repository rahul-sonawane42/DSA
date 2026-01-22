#include <bits/stdc++.h>

using namespace std;

void rec (int n){
    int sum = 0;
    for (int i = 1; i<=n; i++){
        sum +=i;
    }
    cout<<sum;
}

int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    rec(a);
    return 0;
}