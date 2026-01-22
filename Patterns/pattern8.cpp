/*
Pattern 8
 *********
  *******
   *****
    ***
     *
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    for (int i= 4; i>=0; i--){
        for (int j=0; j<=5-i-1; j++){
            cout<<" ";
        }
        for (int k=1; k<= (2*i)+1; k++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}