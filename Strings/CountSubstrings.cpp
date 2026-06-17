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

int atMostDistinct(string s, int k){
    int left = 0, res = 0;
    unordered_map<char, int> freq;

    for (int right = 0; right<s.size(); right++){
        freq[s[right]]++;

        while (freq.size()>k){
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        res += (right-left+1);
    }
    return res;
}

int optCountSubstr(string s, int k){
    return atMostDistinct(s,k) - atMostDistinct(s,k-1);
}

int main() {
    
    string str = "pqpqs";
    int k = 2;
    int result1 = countSubstr(str,k);
    cout << result1 <<endl;
    int result2 = optCountSubstr(str,k);
    cout << result2 <<endl;
    return 0;
}