#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin>>a;
    int t = a;
    int rev=0;

    while (a!=0){
        rev *=10;
        rev += a%10;
        a = a/10;
    }

    if (t == rev){
        cout<<"Palindrome";
    }
    else{

        cout<<"Not a Palindrome";
    }
    return 0;
}