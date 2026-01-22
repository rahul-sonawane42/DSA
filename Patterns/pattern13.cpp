/*
Pattern 13
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int num = 0;
    for (int i = 1; i<=5; i++){
        for (int j = 1; j<=i; j++){
            num = num + 1;
            cout<<num<<' ';
        }
        cout<<endl;
    }

    return 0;
}