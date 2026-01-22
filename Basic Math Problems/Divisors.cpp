#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin>>a;
    vector <int> divs;
    for (int i =1; i <=a; i++){
        if (a%i == 0){
            divs.push_back(i);
        }
    }
    cout<<"Divisors: ";
    for (int i :divs){
        cout<<i<< " "; 
    }
    return 0;
}