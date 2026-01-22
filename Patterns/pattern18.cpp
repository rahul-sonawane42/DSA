/*
Pattern 18
E 
D E 
C D E 
B C D E 
A B C D E 
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    for (int i = 0; i<=4; i++){
        for (char j= 'E'-i; j<= 'E'; j++){
            cout<<j<<' ';
        }cout<<endl;
    }

    return 0;
}