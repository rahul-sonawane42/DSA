#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    int sum = 0; 
    int t = a;
    int n = to_string(a).length();

    for (int i = 0; i < n; i++){
        sum += pow((a%10),n);
        a = a/10;
    }

    if (t == sum){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
    return 0;
}