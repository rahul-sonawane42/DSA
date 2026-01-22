#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    int gcd = 0;

    for (int i =1; i<= min(a,b); i++){
        if (a%i == 0 && b%i ==0){
            gcd =i;
        }
    }
    cout<<"GCD: "<< gcd;
    return 0;
}