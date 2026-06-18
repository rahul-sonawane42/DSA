#include <iostream>

using namespace std;

int expandAroundCenter(const string& s, int left, int right) {
    while (left >= 0 && right < s.length() && s[left] == s[right]) {
        left--;
        right++;
    }
    return right - left - 1;
}

string longestPalindrome(const string& s) {
    if (s.empty()) return "";
    
    int start = 0, end = 0;

    for (int i = 0; i < s.length(); i++) {
        int len1 = expandAroundCenter(s, i, i);     
        int len2 = expandAroundCenter(s, i, i + 1); 
        int len = max(len1, len2);

        if (len > end - start) {
            start = i - (len - 1) / 2;
            end = i + len / 2;
        }
    }
    
    return s.substr(start, end - start + 1);
}

int main() {
    string s1 = "babad";
    cout << "Input: " << s1 << "\nOutput: " << longestPalindrome(s1) << "\n\n";

    string s2 = "cbbd";
    cout << "Input: " << s2 << "\nOutput: " << longestPalindrome(s2) << "\n";

    return 0;
}