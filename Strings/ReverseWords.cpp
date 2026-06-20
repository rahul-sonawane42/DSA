// Problem Statement: Given an input string, containing upper-case and lower-case letters, digits, and spaces( ' ' ). A word is defined as a sequence of non-space characters. 
// The words in s are separated by at least one space. Return a string with the words in reverse order, concatenated by a single space.
#include <bits/stdc++.h>

using namespace std;

string revWords(string s){
    string result = "";
    int i = s.size()-1;
    while(i >= 0){
        while (i>=0 && s[i] == ' '){
            i--;
        }
        if (i<0) break;
        int end = i;
        while (i>=0 && s[i] != ' '){
            i--;
        }
        if (!result.empty()){
            result += ' ';
        }
        result += s.substr(i+1, end-i);
        i--;
    }
    return result;
}

int main() {
    string str = "  Welcome to the jungle  ";
    string result = revWords(str);
    cout << result <<endl;
    return 0;
}