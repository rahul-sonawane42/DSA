/*
Pattern 11
1
01
101
0101
10101
*/
#include <bits/stdc++.h>
using namespace std;

int main(){

    for (int i= 1; i<=5; i++){
        for (int j = 1; j<=i; j++){
            if (i%2 == 1){
                if (j%2 == 1){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
            if (i%2 == 0){
                if (j%2 == 0){
                    cout<<1;
                }
                else{
                    cout<<0;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}