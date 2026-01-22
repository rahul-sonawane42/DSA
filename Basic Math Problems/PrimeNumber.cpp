#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    int chk =0;
    if (a ==2){
        cout<<"Prime Number";
    }
    else{
        for (int i =2; i <a; i++){
            if (a%i == 0){
                chk = 1;
            }
        }
        if (chk == 0){
            cout<<"Prime Number";
        }
        else{
            cout<<"Not a Prime Number";
        }
    }
    return 0;
}