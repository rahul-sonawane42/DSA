/*
Pattern 16
A 
B B 
C C C 
D D D D 
E E E E E 
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for (int i = 0; i <=4; i++){
        char c = 'A'+i;
        for (int j = 0; j<= i; j++){
            cout<<c<<' ';
        }cout<<endl;
    }
    
    return 0;
}