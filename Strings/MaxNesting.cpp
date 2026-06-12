#include <bits/stdc++.h>

using namespace std;

int countNest(string s){
    int p = 0;
    int count = 0;

    for (char c : s){
        if (c == '(') p++;
        if (c == ')') p--;
        count = max(count,p);
    }
    return count;   
}

int main() {
    string s = "(())(())";
    cout << countNest(s) << endl;
    return 0;
}