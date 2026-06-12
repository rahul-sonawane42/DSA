#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int,char> p1, pair<int,char> p2){
    if (p1.first>p2.first) return true;
    if (p1.first<p2.first) return false;
    return p1.second < p2.second;
}

vector<char> sortfreq(string s){
    int n = s.size();
    pair<int,char> freq[26];

    for (int i=0; i<26; i++){
        freq[i] = {0,i+'a'};
    }

    for (char c : s){
        freq[c-'a'].first++;
    }

    sort(freq, freq+26, comp);

    vector<char> ans;
    for (int i = 0; i<26; i++){
        if (freq[i].first >0) ans.push_back(freq[i].second);
    }

    return ans;
}

int main() {
    string s = "tree";
    vector<char> result = sortfreq(s);
    cout << "[ ";
    for (int i = 0; i<result.size(); i++){
        cout <<"'" << result[i] << "' "; 
    }
    cout << "]" << endl;
    return 0;
}