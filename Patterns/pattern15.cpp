/*
Pattern 15
A B C D E 
A B C D 
A B C 
A B 
A 

*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    for (int i = 0; i<=5; i++){
        for(char j = 'A'; j<='A' +(5-i-1); j++){
            cout<<j<<' ';
        }
        cout<<endl;
    }
    
    return 0;
}