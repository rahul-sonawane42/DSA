#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin>>a;
    int rev=0;

    while (a!=0){
        rev *=10;
        rev += a%10;
        a = a/10;
    }
    cout<<"Reverse :"<<rev;
    return 0;
}