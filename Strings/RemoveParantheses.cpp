//Remove Outer Most Parantheses
#include <bits/stdc++.h>

using namespace std;

string removeOuterParentheses(string s){
    string result = "";
    int level = 0;

    for (char ch : s){
        if (ch == '('){
            if (level > 0) result += ch;
            level++;
        }
        else if (ch == ')'){
            level--;
            if (level > 0) result += ch;
        }
    }

    return result;
}

int main() {
    string s = "(()())(())";  
    
    string ans = removeOuterParentheses(s);

    cout << "The result is: " << ans << endl;

    return 0;
}