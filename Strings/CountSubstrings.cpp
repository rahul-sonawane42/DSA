//Problem Statement: You are given a string s and a positive integer k.
//Return the number of substrings that contain exactly k distinct characters.
#include <bits/stdc++.h>

using namespace std;

int countUnq(string s){
    unordered_map<char,int> freq;
    for (int i = 0; i<s.size(); i++){
        freq[s[i]]++;
    }
    return freq.size();
}

int countSubstr(string s, int k){
    int count = 0;
    for (int i = 0; i<s.size(); i++){
        for (int j = s.size()-1; j>=i; j--){
            if (countUnq(s.substr(i, j-i+1)) == k){
                count ++;
            }
        }
    }
    return count;
}

int main() {
    
    string str = "pqpqs";
    int k = 2;
    int result = countSubstr(str,k);
    cout << result <<endl;
    return 0;
}