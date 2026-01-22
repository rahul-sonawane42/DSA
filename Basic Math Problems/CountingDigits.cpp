#include <bits/stdc++.h>
using namespace std;

int main(){

    int a;
    cin>>a;
    int count=0;

    while (a!=0){
        count +=1;
        a = a/10;
    }
    cout<<"Number of digits:"<<count;
    return 0;
}