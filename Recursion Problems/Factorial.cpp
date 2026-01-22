#include <bits/stdc++.h>

using namespace std;

void rec (int n){
    int fact = 1;
    for (int i = 1; i<=n; i++){
        fact *=i;
    }
    cout<<fact;
}

int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    rec(a);
    return 0;
}