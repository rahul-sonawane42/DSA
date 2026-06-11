#include <bits/stdc++.h>

using namespace std;

bool isrotation(string s, string f){
    int n = s.size();
    int i = 0;
    while (i<n){
        if (s == f) return true;
        char temp = s[0];
        for (int j = 0; j<n; j++){
            s[j] = s[j+1];
        }
        s[n-1] = temp;
        i++;
    }
    return false;
}

int main() {
    string s = "rotation";
    string f = "tionrota";

    if (isrotation(s,f)){
        cout << "Rotated" << endl;
    } else {
        cout << "Not Rotated" << endl;
    }
    return 0;
}