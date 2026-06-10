#include <bits/stdc++.h>

using namespace std;

bool isomorphic(string s, string f){
    int m1[256] = {0}, m2[256] = {0};

    int n = s.size();

    for (int i = 0; i<n; i++){
        if (m1[s[i]]!=m2[f[i]]) return false;
        m1[s[i]] = i+1;
        m2[f[i]] = i+1;
    }
    return true;
}

int main() {
    string s = "title";
    string f = "paper";

    if (isomorphic(s,f)){
        cout << "Strings are Isomorphic." << endl;
    } else {
        cout << "String are not Isomorphic." << endl;
    }
    return 0;
}