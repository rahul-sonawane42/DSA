#include <bits/stdc++.h>

using namespace std;

void rec(int n, string name){
    for (int i = 0; i< n; i++){
        cout<<name<< " ";
    }
}

int main() {
    int a;
    string name;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter a name: ";
    cin>>name;
    rec(a,name);
    return 0;
}