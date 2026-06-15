#include <bits/stdc++.h>

using namespace std;

int stringToInt(string str){
    int i = 0;
    int n = str.size();
    int sign = 1;
    long long result;

    while (i < n && str[i] == ' ') i++;

    if (i<n && (str[i] == '+' || str[i] == '-')){
        sign = (str[i] == '-') ? -1 : 1;
        i++; 
    }
    while (i<n && isdigit(str[i])){
        result = (result*10)+(str[i]-'0');

        if (sign*result<=INT_MIN) return INT_MIN;
        if (sign*result>=INT_MAX) return INT_MAX;

        i++;
    }

    return sign*result;
}

int main() {
    string str = "  -0000214638 hii";
    int result = stringToInt(str);
    cout << "Number: " << result << endl;
    return 0;
}