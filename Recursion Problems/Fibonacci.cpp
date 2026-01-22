#include <bits/stdc++.h>

using namespace std;

void rec (int n){
    int a = 0;
    int b = 1;
    int temp;
    cout<<a<<" "<<b<<" ";
    for (int i =0; i<n-1; i++){
        temp = a + b;
        a = b;
        b = temp;
        cout<<temp<<" ";
    }
}

int main() {
    int a;
    cout<<"Enter a number:";
    cin>>a;
    rec(a);
    return 0;
}