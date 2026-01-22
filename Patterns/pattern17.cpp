/*
Pattern 17
    A
   ABA
  ABCBA
 ABCDCBA 
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    for (int i = 0; i<=3; i++){
        for (int j = (3-i); j>=0; j--){
            cout<<' ';
        }
        
        char c = 'A';

        for (int j = 1; j<=((i*2) +1); j++){
            cout<<c;
            if (j <= ((2*i+1)/2)){
                c++;
            }else{
                c--;
            }
        }
        cout<<endl;
    }


    return 0;
}