#include <bits/stdc++.h>

using namespace std;

void rec (int n){
    for (int i = 1; i<=n; i++){
        cout<<i<<" ";
    }
}

int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    rec(a);
    return 0;
}