#include <bits/stdc++.h>

using namespace std;

string longprefix(vector<string> &s){
    if (s.empty()) return "";
    string ret = "";
    sort(s.begin(), s.end());
    string first = s[0];
    string last = s[s.size()-1];
    int minlen = min(first.size(), last.size());
    for (int i = 0; i < minlen; i++){
        if (first[i] == last[i]){
            ret+=first[i];
        }
    }
    return ret;
}

int main() {
    vector<string> str = {"flower", "flow", "flight"};
    string result = longprefix(str);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}