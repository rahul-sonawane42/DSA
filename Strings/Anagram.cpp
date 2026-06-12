#include <bits/stdc++.h>

using namespace std;

bool isanagram(string s, string f){
    if (s.size() != f.size()) return false;
    int let[26] = {0};

    for (int i = 0; i<s.size(); i++){
        let[s[i]-'A']++;
    }

    for (int i = 0; i<s.size(); i++){
        let[f[i]-'A']--;
    }

    for (int i = 0; i<26; i++){
        if (let[i] != 0) return false;
    }
    return true;
}

int main() {
    string s = "cat";
    string f = "tac";

    if (isanagram(s,f)){
        cout << "Anagram" << endl;
    } else {
        cout << "Not a Anagram" << endl;
    }
    return 0;
}